-------------------------------------------------------------------------------
-- Platform:     SDU/TEK/Embedix Spartan-3 50AN experimentation board +
--                               Expansion board with: USB + Ethernet + VGA
-- Application:  Example Pseudo TosNet application (over USB UART)
--               Use serial port setting: 115200 bps 8N1
--==============+==========+===================================================
-- History:     | Anns = Anders Stengaard Sørensen | Sifa = Simon Falsig 
----------------+----------+---------------------------------------------------     
--  Date        | Author   | Action
----------------+----------+---------------------------------------------------
-- 2009_11_30   | Anss     | Created
--              |          |
-------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Here we define the I/O connections from the example
-- Since this is the top level, the connections all go to the outside world
entity uTosNet is      -- PTNX = "Pseudo TosNet eXample"
Port ( 
       CLK_50M_I	: in	STD_LOGIC;    -- 50 MHz from onboard oscillator
	   XB_SERIAL_I  : in	STD_LOGIC;     -- Serial stream from PC
	   XB_SERIAL_O  : out	STD_LOGIC;    -- Serial stream to PC
	   adc          : in   std_logic_vector(9 downto 0);
	   red          : in   std_logic_vector(9 downto 0);
	   green        : in   std_logic_vector(9 downto 0);
	   blue         : in   std_logic_vector(9 downto 0)
	  );
end uTosNet;

architecture Behavioral of uTosNet is

-- Here we define the components we want to include in our design (there is only one)
-- The Port description is just copied from the components own source file
	COMPONENT PseudoTosNet_ctrl is
	Port (
		T_clk_50M					: in  std_logic;
		T_serial_out				: out std_logic;
		T_serial_in                 : in  std_logic;
		T_reg_ptr					: out std_logic_vector(2 downto 0);
		T_word_ptr					: out std_logic_vector(1 downto 0);
		T_data_to_mem				: in  std_logic_vector(31 downto 0);
		T_data_from_mem				: out std_logic_vector(31 downto 0);
		T_data_from_mem_latch		: out std_logic
		);
	END COMPONENT;

-- Here we define the signals used by the top level design
  signal clk_50M        : std_logic;
  signal sys_cnt		: std_logic_vector(31 downto 0) := (others => '0');
  signal freq_gen       : std_logic_vector(31 downto 0) := (others => '0');
  
  signal brick_sig   : std_logic_vector(2 downto 0) := (others => '0');
  signal adc_sig     : std_logic_vector(9 downto 0) := (others => '0');

-- Signals below is used to connect to the Pseudo TosNet Controller component  
  signal T_reg_ptr                 : std_logic_vector(2 downto 0);
  signal T_word_ptr                : std_logic_vector(1 downto 0);
  signal T_data_to_mem             : std_logic_vector(31 downto 0);
  signal T_data_from_mem           : std_logic_vector(31 downto 0);
  signal T_data_from_mem_latch     : std_logic;
	

begin
    adc_sig <=adc;
-- Here we instantiate the Pseudo TosNet Controller component, and connect it's ports to signals	
	PseudoTosNet_ctrlInst : PseudoTosNet_ctrl
	Port map (
	   T_clk_50M          => clk_50M,
		T_serial_out       => XB_SERIAL_O,
		T_serial_in        => XB_SERIAL_I,
		T_reg_ptr		     => T_reg_ptr,					
		T_word_ptr		     => T_word_ptr,									
		T_data_to_mem	     => T_data_to_mem,					
		T_data_from_mem	     => T_data_from_mem,						
		T_data_from_mem_latch => T_data_from_mem_latch						
		);

-- It's not necessary to transfer these ports to signals, we just think it makes the syntax nicer
-- to avoid referring to ports in the body of the code. The compiler will optimize identical signals away
   clk_50M <= CLK_50M_I;

----------------------------------------------------------
-- Unclocked process, to place data on the controller bus
----------------------------------------------------------
   DatToTosNet:
	process(T_reg_ptr,T_word_ptr,brick_sig,adc_sig,red,green,blue)
	begin
		T_data_to_mem<="00000000000000000000000000000000";	-- default data
		case (T_reg_ptr & T_word_ptr) is                   -- The addresses are concatenated for compact code
		   -- Register 0, word 0-3 are hard coded to these values for test/demo purposes
			when "00000" =>	T_data_to_mem <= "00000000000000000000000000000001"; -- 1
			when "00001" =>	T_data_to_mem <= "00000000000000000000000000000010"; -- 2
			when "00010" => T_data_to_mem <= "00000000000000000000000000000100"; -- 3
			when "00011" => T_data_to_mem <= "00000000000000000000000000001000"; -- 4
         -- Register 1
			when "00100" =>	T_data_to_mem <= "00000000000000000000000000001" & brick_sig;  -- Word 0 gives the value of the system counter
			when "00101" =>	T_data_to_mem <= "0000000000000000000000" & adc_sig; -- Word 1 gives the value of the frequency generator
         -- register 2
            when "01000" =>   T_data_to_mem <= "0000000000000000000000" & red; --ADC_red
            when "01001" =>   T_data_to_mem <= "0000000000000000000000" & green; --ADC_green
            when "01010" =>   T_data_to_mem <= "0000000000000000000000" & blue; --ADC_blue
--       Etc. etc. etc.
			when others =>
		end case;		
	end process;

---------------------------------------------------------------------
-- Clocked process, that counts clk_50M edges
---------------------------------------------------------------------
  SystemCounter:
  process(clk_50M)
  begin -- process
    if (clk_50M'event and clk_50M='1') then
	   sys_cnt<=sys_cnt+1;
	 end if;
  end process;

end Behavioral;

