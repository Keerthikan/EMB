----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/26/2015 06:57:41 PM
-- Design Name: 
-- Module Name: pwm - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity adc is
    Port ( MISO : in STD_LOGIC;
           MOSI : out STD_LOGIC;
           CS : out STD_LOGIC;
           SCLK : out STD_LOGIC;
           CLK : in STD_LOGIC;
           read_adc: out std_logic;
           start_adc: in std_logic;
           ADC_value: out std_logic_vector(9 downto 0)
           --state_f: out std_logic_vector(3 downto 0);
           --state_r: out std_logic_vector(3  downto 0)
           );
end adc;

architecture Behavioral of adc is
signal newClock : std_logic := '0';
signal TX :std_logic_vector (4 downto 0) := "11000";--(4 downto 0) := "1000"--"11000";
signal RX : std_logic_vector(9 downto 0) := "0000000000";


--Falling ClockCount triggers
constant CS_HIGH_START: integer := 0;
constant CS_HIGH_END: integer := 1;
constant DATA_INIT_START: integer  := 1;
constant DATA_INIT_END: integer := 5;

-- Rising ClockCount triggers
constant T_sample_start: integer := 6;
constant T_sample_end:   integer := 8;
constant data_read_start: integer := 8;
constant data_read_end: integer := 18; 


begin


prescaler01: process(clk)
variable prescaler_counter : integer range 0 to 50000000 := 0;
begin
    if rising_edge(clk) then 
        if prescaler_counter < 8  then --2500000 then -- 14 -- 7 ((50/3.57)/2) = 3.57 Mhz
            prescaler_counter := prescaler_counter + 1;
        else
            newClock <= not newClock;
            prescaler_counter := 0;
       end if;
    end if;            
end process;

SCLK <= newClock;

ADC_states: process(start_adc,newClock)
variable clockCount : integer range 0 to 19 := 0;
begin

if start_adc = '1' then
    if rising_edge(newClock) then 
        clocKCount := clockCount + 1;
    
        if clockCount >= T_sample_start and clockCount <= T_sample_end then 
        -- MOSI <= '0'; 
        -- Conversion time 
        -- MISO would output Null.. => ignore it. 
        --rx_debug <=  "00";
        --state_r <= "0000";
        end if;
    
        if clockCount >= data_read_start and clockCount <= data_read_end then 
              RX <= RX(8 downto 0) & MISO; 
            --rx_debug <= "01";
        end if;
    
        if clockCount = data_read_end+1 then  
           --read_adc <= '1';
           clockCount := CS_HIGH_start; 
--            --rx_debug <= "10";   
--            --reset RX value     
        --state_r <= "1001";
       end if;      
    end if;
    if falling_edge(newClock) then    
        if clockCount  >= CS_HIGH_start and clockCount <= CS_HIGH_END then 
            read_adc <= '0';
            CS <= '1'; 
            MOSI <= '0';
          --  state_f <= "0000";
           -- TX_debug <= "0000";
        end if;
    
        if clockCount >= DATA_init_start and clockCount <= Data_Init_end then 
            CS <= '0';    
            TX <= TX(3 downto 0) & TX(4); 
            MOSI <= TX(4);
          --  state_f <= "0010";
          --  TX_debug <= "0001";
        end if; 
    
        if clockCount = T_sample_start then 
            MOSI <= '0';
          --  TX_debug <= "0011";
          --   state_f <= "0011";
        end if;   
        
        if clockCount = data_read_end then  
              read_adc <= '1';
      --      clockCount := CS_HIGH_start; 
            --rx_debug <= "10";   
            --reset RX value   
             --state_f <= "1111";  
        end if;    
    end if;
else 
    read_adc <= '0';
   -- RX <= "0000000000";
end if;  
  
end process;

adc_value <= rx; 
          
end Behavioral;
