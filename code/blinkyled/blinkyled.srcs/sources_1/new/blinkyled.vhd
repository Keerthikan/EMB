----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 09:37:27 AM
-- Design Name: 
-- Module Name: blinkyled - Behavioral
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity blinkyled is
    Port ( clk_50mhz : in STD_LOGIC;
           led1_o : out STD_LOGIC;
           led2_o : out STD_LOGIC);
end blinkyled;

architecture Behavioral of blinkyled is
    signal divider : STD_LOGIC_VECTOR (25 downto 0):= "00000000000000000000000000";
begin
    led1_o <= divider(24);
    led2_o <= divider(25);
        
        ClockDivide:
    process (clk_50mhz)
        begin
            if(clk_50mhz'event and clk_50mhz ='1') then
                divider <= divider + '1';
            end if;
    end process;
end Behavioral;
