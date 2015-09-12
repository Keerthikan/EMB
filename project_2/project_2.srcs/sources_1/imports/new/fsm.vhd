----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 05:33:03 PM
-- Design Name: 
-- Module Name: fsm - Behavioral
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
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fsm is
    Port ( forward_i : in std_logic;
           reset_i : in std_logic;
           clk_50mhz : in std_logic;
           led_o : out std_logic_vector (5 downto 0));
end fsm;

architecture Behavioral of fsm is
    signal state: std_logic_vector(5 downto 0) := "000000";
begin
    
    statecase: process(clk_50mhz, state, forward_i, reset_i)
    begin
        if (reset_i = '0') then 
            state <= "000000";
        end if;
        if (forward_i = '0') then 
            state <= std_logic_vector(unsigned(state)+1);
        elsif (rising_edge(clk_50mhz)) then 
            led_o <= state;
        end if; 
    end process;
    
    
end Behavioral;
