----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/23/2015 05:43:48 PM
-- Design Name: 
-- Module Name: pwm_tb - Behavioral
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

entity pwm_tb is
end pwm_tb;

architecture Behavioral of pwm_tb is

    component pwm 
    port(
        CLK : in std_logic;
        PWM : out std_logic;
        debug_led: out std_logic
    );
    end component;
    
    signal CLK : std_logic := '0';
    signal pwm_s : std_logic := '0';
    signal debug_led : std_logic := '0';
    
    constant clk_period : time := 20ns;
begin

    uut: pwm port map(
        CLK => CLK,
        PWM => PWM_s,
        debug_led => debug_led
    );
    
    CLK_Process: process
    begin 
         CLK <= '0';
         wait for clk_period/2; 
         CLK <= '1';
         wait for clk_period/2;
    end process;

end Behavioral;
