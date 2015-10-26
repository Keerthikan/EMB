----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/26/2015 06:57:41 PM
-- Design Name: 
-- Module Name: pwm - Behavioral
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

entity pwm is
    Port ( MISO : in STD_LOGIC;
           MOSI : out STD_LOGIC;
           CS : out STD_LOGIC;
           SCLK : out STD_LOGIC;
           CLK : in STD_LOGIC;
           tx_debug: out std_logic_vector(3 downto 0);
           rx_debug: out std_logic_vector(1 downto 0);
           rx_led: out std_logic_vector(9 downto 0)
           --tx_pwm: out std_logic_vector(1 downto 0)
           );
end pwm;

architecture Behavioral of pwm is
signal newClock : std_logic := '0';
signal TX :std_logic_vector(4 downto 0) := "11000";
signal RX : std_logic_vector(9 downto 0) := "0000000000";
--signal busy: std_logic := '0';
begin


prescaler01: process(clk)
variable prescaler_counter : integer range 0 to 50000000 := 0;
begin
    if rising_edge(clk) then 
        if prescaler_counter < 14  then --2500000 then -- 14
            prescaler_counter := prescaler_counter + 1;
        else
            newClock <= not newClock;
            prescaler_counter := 0;
       end if;
    end if;            
end process;

SCLK <= newClock;

SPI_states: process(newClock)
variable clockCount : integer range 0 to 19 := 0;
begin

if rising_edge(newClock) then 
    if clockCount = 7 then 
        --  busy <= '1';                               -- Nullbit read; 
          rx_debug <= "01";
    elsif clockCount > 7 then
          if clockCount < 18 then
            rx_debug <= "10";
            RX <= RX(8 downto 0) & MISO; 
            rx_led <= RX;
          end if;
    else 
         rx_debug <= "11";
       --  busy <= '0';
         RX <= "0000000000";
         rx_led <= RX; 
    end if;        
end if;
if falling_edge(newClock) then 
    if clockCount = 0  then 
        tx_debug <= "0000";
        CS <= '1';
        MOSI <= '0';
        clockCount:= clockCount + 1;
        
    elsif clockCount < 6 then
        tx_debug <= "0001";
        clockCount := clockCount +1; 
        CS <= '0';
        TX <= TX(3 downto 0) & TX(4); 
        MOSI <= TX(4);
        
    elsif clockCount = 6 then
        tx_debug <= "0011";
        MOSI <= '0';
        clockCount := clockCount +1; -- T_sample
        
    elsif clockCount = 18 then 
        tx_debug <= "0111";   
        CS <= '1';
        MOSI <= '0';
        clockCount := 0 ;
    else
        tx_debug <= "1111";
        clockCount := clockCount +1; 
    end if;
end if;
end process;







end Behavioral;
