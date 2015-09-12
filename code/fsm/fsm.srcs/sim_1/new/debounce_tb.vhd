----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 08:16:45 PM
-- Design Name: 
-- Module Name: debounce_tb - Behavioral
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

entity debounce_tb is
end debounce_tb;

architecture Behavioral of debounce_tb is
    component debounce
        Port ( clk_50mhz    : in STD_LOGIC;
               btn          : in STD_LOGIC;
               result       : out STD_LOGIC);
    end component;
    
    signal clk_50mhz    : std_logic := '0';
    signal btn          : std_logic := '0';
    signal result       : std_logic := '0';
    
    constant half_period: time := 10 ns; --half-period of 50mhz signal to generate clk
    
begin
    uut: debounce port map( clk_50mhz => clk_50mhz,
                            btn => btn,
                            result => result);
                            
    clk_50mhz <= not clk_50mhz after half_period;

    stim_proc: process
    begin
        wait for 1 ms;
        btn <= '1';
        wait for 9 ms;
        btn <= '0';
        wait for 1 ms;
        btn <= '1';
        wait for 11 ms;
        btn <= '0';
        wait for 11 ms;
    end process;
end Behavioral;
