library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity adc_tb is
end adc_tb;

architecture arch of adc_tb is

  -- Component declaration of the tested unit
  component adc
    port(
      clk      : in  std_logic;
      sclk     : out std_logic;
      miso     : in  std_logic;
      mosi     : out std_logic;
      cs       : out std_logic;
      read_adc: out std_logic;
      start_adc: in std_logic;
      ADC_value: out std_logic_vector(9 downto 0);
      state_f   : out std_logic_vector(3 downto 0);
      state_r   : out std_logic_vector(3 downto 0)
      );
  end component;

  -- Stimulus signals - signals mapped to the input and inout ports of tested entity
  signal sclk  : std_logic := '0'; -- the sample clock

  signal clk  : std_logic := '0';
  signal dout : std_logic := 'Z';
  signal din  : std_logic;
  signal read_adc: std_logic;
  signal start_adc: std_logic:= '1';
  signal ADC_value: std_logic_vector(9 downto 0);
  signal state_f : std_logic_vector(3 downto 0);
  signal state_r : std_logic_vector(3 downto 0);
  -- Observed signals - signals mapped to the output ports of tested entity
  signal cs       : std_logic;
  signal adc_data : std_logic_vector(9 downto 0);

  -- clock period
  constant period : time := 20 ns; -- 50 MHz clock

  -- constant data set that will be sent back as the ADC data  
  constant FIXED_DATA : std_logic_vector(9 downto 0) := std_logic_vector(to_unsigned(928,10));

  -- timing parameters from the datasheet
  constant T_HI   : time := 125 ns;     -- CLK high time
  constant T_LO   : time := 125 ns;     -- CLK low time
  constant T_SUCS : time := 100 ns;     -- CS Fall to first rising CLK edge
  constant T_DO   : time := 125 ns;  -- CLK fall to output data valid ( 125ns at 5V )
  constant T_EN   : time := 125 ns;  -- CLK fall to output enable ( 125ns at 5V )
  constant T_DIS  : time := 100 ns;     -- CS Rise to output disable
  constant T_CSH  : time := 270 ns;     -- CS disable time
  constant T_R    : time := 100 ns;     -- D_OUT rise time
  constant T_F    : time := 100 ns;     -- D_OUT fall time

begin

  ---- Unit Under Test port map
  UUT : adc
    port map (
      clk      => clk,
      sclk     => sclk,
      miso     => dout,
      mosi     => din,
      cs       => cs,
      read_adc => read_adc,
      start_adc => start_adc,
      ADC_value => ADC_value,
      state_f => state_f,
      state_r => state_r
      );

  -- generate the clock                     
  clk <= not clk after period/2;

  -- emulate what the MCP3001 ADC is doing, by sending back some test data
  -- this process uses the timing diagram (Fig. 1) from 21293C.pdf
  process
    variable differential : boolean := false;
    variable channel_sel : unsigned(2 downto 0) := "000";
  begin
    -- Set the data line to HI-Z
    dout <= 'Z';

    -- wait until the CS is brought to '0', this starts the conversion.
    -- also check for an error where there is a rising edge that happens
    -- less than 100 ns after CS is brought to '0'
    wait until falling_edge(cs);
    if sclk = '0' then
      wait for T_SUCS;
      assert sclk = '0'
        report "Timing constraint Tsucs=100ns violated, clock rising edge must come atleast 100ns after CS transitions to '0'"
        severity error;
    else
      wait for T_SUCS;
    end if;

    -- wait for the start bit
    if din = '0' then
      wait until rising_edge(din);
    end if;

    -- handle the input mode and channel select
    -- setup and hold times are not checked
    wait until falling_edge(sclk);
    wait until rising_edge(sclk);
    if din = '1' then
      differential := false;
    else
      differential := true;
    end if;
    for i in 2 downto 0 loop
      wait until rising_edge(sclk);
      channel_sel(i) := din;
    end loop;
    if differential then
      report "sampling in differential mode on channel " & integer'image(to_integer(channel_sel));
    else
      report "sampling in differential mode on channel " & integer'image(to_integer(channel_sel));
    end if;

    -- sample time...
    wait until falling_edge(sclk);
    wait until falling_edge(sclk);
    wait for T_EN; -- small delay time after falling edge from datasheet
    dout <= '0';

    -- output the converted data MSB first after every falling edge.
    -- also check for a likely problem where the CS is not held at '0' while
    -- reading all 10 bits of data.
    for i in 9 downto 0 loop
      wait until falling_edge(sclk);
      wait for T_DO; -- small delay time after falling edge from datasheet
      dout <= FIXED_DATA(i);
      assert cs = '0'
        report "CS needs to be held at '0', not all bits have been transmitted"
        severity warning;
    end loop;

    -- wait for CS to go back high then disable the output
    wait until rising_edge(cs);
    wait for T_DIS;
    dout <= 'Z';

    -- wait for the minimum delay time before the start of the next sample.
    -- also check for a likely error, where CS is only '1' for a single
    -- 320ns clock period
    wait for T_CSH-T_DIS;
    assert cs = '1'
      report "Timing Constraint Tcsh=350ns violated, CS needs to be held to '1' for atleast 350ns before transitioning to '0'"
      severity error;

  end process;

end arch;