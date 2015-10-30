----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/29/2015 01:36:29 AM
-- Design Name: 
-- Module Name: led_driver_tb - Behavioral
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

entity led_driver_tb is
end led_driver_tb;

architecture Behavioral of led_driver_tb is
  component led_driver 
     Port ( CLK : in STD_LOGIC;
            led_red : out STD_LOGIC;
            led_green: out std_logic;
            led_blue: out std_logic;
            start_ADC : out std_logic ;
            led_on: in std_logic;
           -- counter: out std_logic_vector(3 downto 0);
            --stateS: out std_logic_vector(2 downto 0);
            next_state: in std_logic
            --stop_ADC_req : in std_logic;  --
            --req_next_state: out std_logic           
          );
 end component;
 
  signal clk  : std_logic := '0';
  signal led_red : std_logic;
  signal led_green : std_logic;
  signal led_blue  : std_logic;
  signal start_ADC : std_logic;
  signal led_on    : std_logic := '1';
  signal stateS   : std_logic_vector(2 downto 0);
  signal next_state: std_logic := '0';
  signal stop_ADC_req: std_logic;
  signal req_next_state: std_logic;
  constant period : time := 20 ns; -- 50 MHz clock
  constant nextState_period : time := 28 us;
  
  

begin

    UUT: led_driver
        port map(
        CLK => CLK,
        led_red => led_red,
        led_green => led_green,
        led_blue => led_blue, 
        start_ADC => start_ADC,
        led_on => led_on,
        --stateS => stateS,
        next_state => next_state
        --stop_ADC_req => stop_ADC_req,
        --req_next_state => req_next_state
        );
        
 CLK <= not CLK after period/2;
 next_state <= not next_state after nextState_period/2; 
    
-- stim: process
-- begin
--    if start_ADC = '1' then
--        wait for 2 ns ;
--        stop_ADC_req <= '1';
--    else
--        stop_ADC_req <= '0';   
--    end if;     
-- end process;
 
end Behavioral;