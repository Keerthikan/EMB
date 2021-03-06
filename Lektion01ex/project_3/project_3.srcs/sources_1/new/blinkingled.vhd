----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 09:19:27 AM
-- Design Name: 
-- Module Name: blinkingled - Behavioral
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

entity blinkingled is
    Port ( Led_red : out STD_LOGIC;
           Led_yellow: out STD_LOGIC;
           CLK : in STD_LOGIC );
end blinkingled;

architecture Behavioral of blinkingled is
signal divider: STD_LOGIC_VECTOR (25 downto 0):= "0000000000000000000000000";
begin
Led_red <= divider(24);
Led_yellow <= divider(25);

clockdivide: process(CLK)
begin 
    if rising_edge(CLK) then 
    divider <= divider + '1';
    end if
end process
end Behavioral;
