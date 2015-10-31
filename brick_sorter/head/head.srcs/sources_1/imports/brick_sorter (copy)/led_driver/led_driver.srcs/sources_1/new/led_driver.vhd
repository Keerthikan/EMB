----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/27/2015 02:06:13 PM
-- Design Name: 
-- Module Name: led_driver - Behavioral
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
use ieee.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity led_driver is
    Port ( CLK : in STD_LOGIC;
           led_red : out STD_LOGIC;
           led_green: out std_logic;
           led_blue: out std_logic;
           start_ADC : out std_logic ;
           --adc_read : in std_logic;  --
           --req_next_state: out std_logic; -- 
           led_on: in std_logic;
          -- counter: out std_logic_vector(3 downto 0);
           stateS: out std_logic_vector(1 downto 0);
           next_state: in std_logic
           --adc_on : out std_logic
         );
end led_driver;

architecture Behavioral of led_driver is
type state_type is (red,green,blue);  --type of state machine.
signal state: state_type := red; 
begin

LEDprocess: process(led_on, state)
begin 
 if led_on = '1' then 
    --if rising_edge(clk) then
          case state is 
           when red => 
                 led_red  <= '1';
                 led_green<= '0';
                 led_blue <= '0';
                 stateS <= "10";
           when green =>
                led_red  <= '0';   
                led_green<= '1';
                led_blue <= '0';
                stateS <= "01";
           when blue =>           
                led_red   <= '0';
                led_green <= '0';    
                led_blue  <= '1'; 
                stateS <= "11";   
          end case;      
elsif led_on = '0' then   
          led_blue <= '0';
          led_red <= '0';
          led_green <= '0';
          stateS <= "00";             
else
    led_blue <= '0';
    led_red <= '0';
    led_green <= '0';   
    stateS <= "00";             
end if;        
end process;

state_changer: process(next_state,state, clk)
variable count: integer range 0 to 100000000 :=0;
begin    
    if next_state = '1' then 
        if count > 650 then 
            if state = red then
                state <= green;
            elsif state = green then 
                state <= blue;
            elsif state = blue then 
                state <= red;
            end if;
        end if;       
        count:= 0;        
    elsif rising_edge(clk) then         
        if count > 650 then 
            start_adc <= '1';
            --adc_on <= '1';
        elsif count <650 then 
            start_adc <= '0'; 
            --adc_on <= '1';  
        end if;   
        count  := count  +1 ;               
    end if;
    
end process;   

-- wait 650 ticks for signal to settle; 

end Behavioral;
