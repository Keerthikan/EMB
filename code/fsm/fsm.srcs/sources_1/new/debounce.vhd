----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 07:47:21 PM
-- Design Name: 
-- Module Name: debounce - Behavioral
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
use ieee.std_logic_unsigned.all;

entity debounce is
    GENERIC(
           counter_size  :  INTEGER := 4); --sets debounce time 19 bits = 10.5 ms
           
    Port ( clk_50mhz    : in STD_LOGIC;
           btn          : in STD_LOGIC;
           result       : out STD_LOGIC);
end debounce;

architecture Behavioral of debounce is
    signal flipflop     : std_logic_vector(1 downto 0);
    signal count        : std_logic_vector(counter_size downto 0) := (others => '0');
    signal counter_set  : std_logic;  
begin
    
    counter_set <= flipflop(0) xor flipflop(1);
    
    db: process(clk_50mhz)
    begin
        if(rising_edge(clk_50mhz)) then
            flipflop(0) <= btn;
            flipflop(1) <= flipflop(0);
            if(counter_set = '1') then
                count <= (others => '0');
            elsif(count(counter_size) = '0') then
                count <= count + 1;
            else
                result <= flipflop(1);
            end if;
        end if;
    end process;
    
end Behavioral;
