----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/24/2015 10:06:26 AM
-- Design Name: 
-- Module Name: fsm_simu - Behavioral
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

entity fsm_simu is
end fsm_simu;

architecture Behavioral of fsm_simu is

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
   --signal    
   signal res_sig0,res_sig1:    STD_LOGIC    := '1';
   signal clk_50mhz,btn,result: STD_LOGIC    := '1';
   signal forward_i:            STD_LOGIC    := '1';  
   signal reset_i:              std_logic    := '1';
   signal led_o:                std_logic_vector(5 downto 0) := "000000";
   -- constant
   constant clk_50mhz : time := 20ns;
   constant btn       : time := 40ns;
   constant forward_i : time := 40ns;
   constant resest_i  : time := 100ns;   
begin
    uut: debounce PORT MAP (
    clk_50mhz => clk_50mhz,
    btn => btn,
    result result   
    );
    
    uut1: fsm PORT MAP(
    forward_i => forward_i,    
    reset_i   => reset_i,  
    led_o     =>  led_o
    );
    
    btn_process :process
    begin
        btn <= '1';
        wait for  btn_period/2;
        btn <= '0';
        wait for  btn_period/2;    
    end process
    
    clk_50mhz_process :process
       begin
           clk_50mhz <= '1';
           wait for  clk_50mhz_period/2;
           clk_50mhz <= '0';
           wait for  clk_50mhz_period/2;    
       end process
    
    forward_i :process
        begin
           forward_i <= '1';
           wait for  forward_i/2;
           forward_i <= '0';
           wait for  forward_i/2;    
        end process
        
    reset_i :process
        begin
           reset_i <= '1'; 
           wait for  reset_i/2;
           reset_i <= '0;
           wait for  reset_i/2;    
        end process 
end Behavioral;
