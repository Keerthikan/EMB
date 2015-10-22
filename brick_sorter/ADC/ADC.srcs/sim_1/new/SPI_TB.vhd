----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/11/2015 12:42:48 AM
-- Design Name: 
-- Module Name: SPI_TB - Behavioral
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

entity SPI_TB is
end SPI_TB;

architecture Behavioral of SPI_TB is

Component main
        port(
           MISO : in STD_LOGIC;
           MOSI : out STD_LOGIC;
           CS : out STD_LOGIC;
           SCLK : out STD_LOGIC;
           CLK : in STD_LOGIC;
           --debug_led: out std_logic_vector(9 downto 0)
           debug_TX: out std_logic_vector(7 downto 0)  
           );
end component;
         signal MISO :  STD_LOGIC := '0';
         signal MOSI :  STD_LOGIC := '0';
         signal CS :    STD_LOGIC := '0';
         signal SCLK :  STD_LOGIC := '0';
         signal CLK :   STD_LOGIC := '0';
         --signal debug_led:  std_logic_vector(9 downto 0) := "0000000000";   
         signal debug_tx: std_logic_vector(7 downto 0):= "00000000";
         constant CLK_period  :time := 20ns; 
begin

 UUT:  main PORT MAP(
       MISO => MISO,
       MOSI => MOSI,
       CS => CS,
       SCLK => SCLK,
       CLK => CLK,
       --debug_led => debug_led
       debug_tx => debug_tx
);

 timer :process
 begin
     CLK <=  '0';
     wait for  clk_period/2;
     CLK <= '1';
     wait for clk_period/2;
 end process;

end Behavioral;
