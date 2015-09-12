----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 06:15:56 PM
-- Design Name: 
-- Module Name: fsm_tb - Behavioral
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

entity fsm_tb is
end fsm_tb;

architecture behavioral of fsm_tb is
    component fsm
        Port ( forward_i    : in std_logic;
               reset_i      : in std_logic;
               clk_50mhz    : in std_logic;
               led_o        : out std_logic_vector (5 downto 0));
    end component;
    
    signal forward_i    : std_logic := '0';
    signal reset_i      : std_logic := '0';
    signal clk_50mhz    : std_logic := '0';
    signal led_o        : std_logic_vector (5 downto 0) := "000000";
    
    constant half_period: time := 10 ns;
    
begin
    uut: fsm port map(  forward_i => forward_i,
                        reset_i => reset_i,
                        led_o => led_o,
                        clk_50mhz => clk_50mhz);
    
    clk_50mhz <= not clk_50mhz after half_period;
            
    stim_proc: process
    begin
        wait for 1 ms;
        forward_i <= '1';
        wait for 11 ms;
        forward_i <= '0';  
        wait for 11 ms;                    
    end process;
end behavioral;
