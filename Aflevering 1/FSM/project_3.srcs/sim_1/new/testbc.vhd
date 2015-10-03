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

entity testbench is
end testbench;

architecture Behavioral of testbench is
COMPONENT head

Port (  forward_i   : in std_logic;
        reset_i     : in std_logic;
        clk_50mhz   : in std_logic;
        led_o       : out std_logic_vector(5 downto 0)
 );
END Component;

component debounce
       Port ( clk_50mhz    : in std_logic;
              btn          : in std_logic;
              result       : out std_logic);
   end component;
   
   component fsm
       Port ( forward_i    : in std_logic;
              reset_i      : in std_logic;
              --clk_50mhz    : in std_logic;
              led_o        : out std_logic_vector(5 downto 0));
   end component;


signal forward_i:   std_logic := '1';
signal reset_i:     std_logic := '1';
signal clk_50mhz:   std_logic := '0';
signal result0:      std_logic := '1';
signal result1:      std_logic := '1';
signal led_o:       std_logic_vector(5 downto 0) := "000000";

constant period : time := 10ns;

begin

UUT0: debounce
    port map(
    clk_50mhz => clk_50mhz,
    btn => forward_i,
    result => result0
    );

UUT1: debounce
    port map(
    clk_50mhz =>  clk_50mhz,
    btn => reset_i,
    result => result1
    );

UUT2: fsm
    port map(
    led_o => led_o,
    forward_i => result0,
    reset_i => result1
    );
    
    clk_50mhz <= not clk_50mhz after period;
    
    stim_proc: process
    begin 
        forward_i <= '0';
        wait for 15 ms;
        forward_i <= '1';
        wait for 15 ms;
    end process;
   
     stim_proc1: process
       begin 
           reset_i <= '0';
           wait for 15 ms;
           reset_i <= '1';
           wait for 100 ms;
       end process;   
     
    
end Behavioral;
