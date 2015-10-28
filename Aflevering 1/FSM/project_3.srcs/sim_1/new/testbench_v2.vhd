----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/24/2015 02:20:58 PM
-- Design Name: 
-- Module Name: testbench_v2 - Behavioral
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

entity testbench_v2 is
end testbench_v2;

architecture Behavioral of testbench_v2 is
COMPONENT head

Port (  forward_i   : in std_logic;
        reset_i     : in std_logic;
        clk_50mhz   : in std_logic;
        led_o       : out std_logic_vector(5 downto 0)
 );
END Component;

signal forward_i:   std_logic = '0';
signal reset_i:     std_logic = '0';
signal clk_50mhz:   std_logic = '0';
signal result0:     std_logic = '0';
signal result1:     std_logic = '0';
signal led_o:       std_logic_vector(5 downto 0) = "000000";

constant period : time := 10ns;

begin

UUT: db0 
    port map(
    clk_50mhz => clk_50mhz,
    btn => forward_i,
    result => result0
    );

UUT: db1
    port map(
    clk_50mhz =>  clk_50mhz,
    btn => reset_i,
    result => result1
    );

UUT: fsm0
    port map(
    led_o => led_o,
    forward_i => result0,
    reset_i => result1
    );
    
    clk_50mhz <= not clk_50mhz after period;
    
    stim_proc: process
    begin 
        forward_i <= '1';
        wait for 15 ms;
        forward_i <= '0';
        wait for 15 ms;
    end process;
    
end Behavioral;
