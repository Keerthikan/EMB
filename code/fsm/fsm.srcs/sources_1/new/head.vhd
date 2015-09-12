----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 08:09:29 PM
-- Design Name: 
-- Module Name: head - Behavioral
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

entity head is
    Port (  forward_i   : in std_logic;
            reset_i     : in std_logic;
            clk_50mhz   : in std_logic;
            led_o       : out std_logic_vector(5 downto 0));
end head;

architecture Behavioral of head is
    
    component debounce
        generic(
              counter_size  : integer); --sets debounce time 19 bits = 10.5 ms
        Port ( clk_50mhz    : in std_logic;
               btn          : in std_logic;
               result       : out std_logic);
    end component;
    
    component fsm
        Port ( forward_i    : in std_logic;
               reset_i      : in std_logic;
               clk_50mhz    : in std_logic;
               led_o        : out std_logic_vector(5 downto 0) := (others => '0'));
    end component;
    
    signal res_sig0,res_sig1 : std_logic := '0';
    
begin
    
    db0 : debounce 
            generic map (
                counter_size => 19 )
            port map (
                btn => forward_i,
                clk_50mhz => clk_50mhz,
                result => res_sig0);

    db1 : debounce 
            generic map (
                counter_size => 19 )
            port map (
                btn => reset_i,
                clk_50mhz => clk_50mhz,
                result => res_sig1);
            
    fsm0 : fsm port map (
             led_o => led_o,
             clk_50mhz => clk_50mhz,
             forward_i => res_sig0,
             reset_i => res_sig1); 
    
end Behavioral;
