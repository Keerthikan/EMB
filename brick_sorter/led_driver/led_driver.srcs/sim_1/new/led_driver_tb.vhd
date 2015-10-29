----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/27/2015 06:45:57 PM
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
use ieee.numeric_std.all;

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
    port(
      clk         : in  std_logic;
      PWM_red     : out std_logic;
      PWM_green   : out  std_logic;
      PWM_blue    : out std_logic;
      start_adc   : out std_logic;
      pwm_on      : in std_logic;
      --counter     : out std_logic_vector(3 downto 0);
      stateS       : out std_logic_vector(2 downto 0)
      );
  end component;


signal clk:         std_logic   := '0';
signal PWM_red:     std_logic   ;
signal PWM_green:   std_logic   ;
signal PWM_blue:    std_logic   ;
signal start_adc:   std_logic   ;
signal pwm_on:      std_logic   := '1';
--signal counter:     std_logic_vector(3 downto 0) := "0000";
signal state:       std_logic_vector(2 downto 0) ;           
constant period : time := 20 ns; -- 50 MHz clock


begin

clk <= not clk after period/2;

UUT: led_driver
    port map(
    clk => clk,
    PWM_red => PWM_red, 
    PWM_green => PWM_green, 
    PWM_blue => PWM_blue,
    pwm_on => pwm_on,
    start_adc => start_adc,
    --counter => counter,
    stateS => state
    );

end Behavioral;
