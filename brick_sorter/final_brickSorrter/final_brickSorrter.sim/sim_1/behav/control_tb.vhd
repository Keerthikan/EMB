----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/31/2015 08:56:57 PM
-- Design Name: 
-- Module Name: control_tb - Behavioral
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

entity control_tb is
end control_tb;

architecture Behavioral of control_tb is
component control 
    Port ( 
           MISO : in STD_LOGIC;
           MOSI : out STD_LOGIC;
           CS : out STD_LOGIC;
           SCLK : out STD_LOGIC;
           CLK : in STD_LOGIC;
           
           led_red : out STD_LOGIC;
           led_green: out std_logic;
           led_blue: out std_logic;
           
           MAX_LED_r: out std_logic;
           MAX_LED_g: out std_logic;
           MAX_LED_b: out std_logic; --
           
          -- PWM_motor : out std_logic;
           
           Out_next_state: out std_logic;
           
           XB_SERIAL_I  : in	STD_LOGIC;     -- Serial stream from PC
           XB_SERIAL_O  : out	STD_LOGIC    -- Serial stream to PC
           --stateS: out std_logic_vector(2 downto 0);
           --nextState: out std_logic;
           --adc_on : out std_logic --
         );
end component;

signal     MISO :  STD_LOGIC;
signal     MOSI :  STD_LOGIC;
signal     CS :  STD_LOGIC;
signal     SCLK :  STD_LOGIC;
signal     CLK :  STD_LOGIC;
           
signal     led_red :  STD_LOGIC;
signal     led_green:  std_logic;
signal     led_blue:  std_logic;
           
signal     MAX_LED_r:  std_logic;
signal     MAX_LED_g:  std_logic;
signal     MAX_LED_b:  std_logic; --           
          -- PWM_motor : out std_logic;          
signal     Out_next_state:  std_logic;          
signal     XB_SERIAL_I  : 	STD_LOGIC;     -- Serial stream from PC
signal     XB_SERIAL_O  : 	STD_LOGIC;    -- Serial stream to PC
           --stateS: out std_logic_vector(2 downto 0);
           --nextState: out std_logic;
           --adc_on : out std_logic --
constant period : time := 20 ns; -- 50 MHz clock
begin
   


UUT: control
    port map(
    CLK => CLK,
    MISO => MISO,
    MOSI => MOSI,
    CS => CS,
    SCLK => SCLK,
    
    led_red => led_red,
    led_green => led_green,
    led_blue => led_blue,
    
    MAX_LED_r => MAX_LED_r,
    MAX_LED_g => MAX_LED_g,
    MAX_LED_b => MAX_LED_b,
    
    OUT_next_state => OUT_next_state,
    XB_SERIAL_I => XB_SERIAL_I,
    XB_SERIAL_O => XB_SERIAL_O    
    );
    
    CLK <= not CLK after period/2;
    
end Behavioral;
