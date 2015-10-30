----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/28/2015 02:52:04 PM
-- Design Name: 
-- Module Name: control_tb - Behavioral
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

entity control_tb is
end control_tb;

architecture Behavioral of control_tb is
component control
    port(
        MISO : in STD_LOGIC;
        MOSI : out STD_LOGIC;
        CS : out STD_LOGIC;
        SCLK : out STD_LOGIC;
        CLK : in STD_LOGIC;
        led_red : out STD_LOGIC;
        led_green: out std_logic;
        led_blue: out std_logic;
        stateS: out std_logic_vector(2 downto 0);
        nextState: out std_logic;
        adc_on : out std_logic --
    );
    
end component;    
        signal MISO: std_logic;
        signal MOSI: std_logic;
        signal CS: std_logic;
        signal SCLK: std_logic;
        signal CLK : std_logic := '0';
        signal led_red: std_logic;
        signal led_green: std_logic;
        signal led_blue : std_logic; 
        signal stateS: std_logic_vector(2 downto 0);
        signal nextState: std_logic;
        constant period : time := 20 ns; -- 50 MHz clock
begin
UUT: control
    port map(
        CLK => CLK,
        MISO => MISO,
        MOSI => MOSI,
        CS => CS,
        SCLK => SCLK,
        led_red => led_red,
        led_green => led_green,
        led_blue => led_blue,
        stateS => stateS,
        nextState => nextState
    );
        
CLK <= not CLK after period/2;    
end Behavioral;
