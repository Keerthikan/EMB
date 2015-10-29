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
           PWM_red : out STD_LOGIC;
           PWM_green: out std_logic;
           PWM_blue: out std_logic;
           start_ADC : out std_logic ;
           pwm_on: in std_logic;
          -- counter: out std_logic_vector(3 downto 0);
           stateS: out std_logic_vector(2 downto 0)
         );
end led_driver;

architecture Behavioral of led_driver is
type state_type is (red,green,blue);  --type of state machine.
signal state: state_type ; 
begin
 -- Duty cycle -  30 %

PWM_process: process(clk,pwm_on)
begin 
if rising_edge(clk) then
    if pwm_on = '1' then 
        case state is 
            when red =>
                PWM_red<= '1';
                PWM_green<= '0';
                PWM_blue<= '0';
                StateS <= "001";
            when green =>
                PWM_red<= '0';   
                PWM_green<= '1';
                PWM_blue<= '0';
                StateS <= "010";
            when blue =>
               PWM_red   <= '0';
               PWM_green <= '0';    
               PWM_blue  <= '1';
               StateS <= "100";
        end case;    
    else 
        pwm_blue <= '0';
        pwm_red <= '0';
        pwm_green <= '0';        
    end if;
end if;                 
end process;

state_changer: process(clk)
variable prescaler: integer range 0 to 50000000 :=0;
begin
if rising_edge(clk) then
    prescaler := prescaler + 1; 
    if prescaler < 250 + 650  then 
        state <= red;   -- 5µs  + 13µs(signal settling)  = 250 + 650 =  900 ticks
    elsif prescaler < 250+650  + 250+650 then 
        state <= green; -- 5µs + 13 µs (signal settling) = 900 ticks
    elsif prescaler < 250+650 + 250+650 + 250+650 then 
        state <= blue;  --5 µs + 13 µs (signal settling) = 900 ticks
    elsif prescaler < 250+650 + 250+650 + 250+650 + 250+650  then 
        prescaler := 0; 
    end if;     
end if; 

case state is
    when red =>
        if prescaler < 650  then 
        -- settling the signal
        start_ADC <= '0';
        
        elsif prescaler >= 650 then
            if prescaler < 650 + 250 then
            -- PWM  - 250 ticks
            -- ADC on
                start_ADC <= '1';
            end if;
        end if;
        
    when green =>
         if prescaler < 650 + 250 + 650 then 
         -- setlling the signal    
         start_ADC <= '0';
         elsif prescaler >= 650 + 250 + 650 then 

            if prescaler < 650 + 250 + 650 + 250 then
         -- PWM  - 250 ticks 
         -- ADC on
                start_adc <= '1';  
            end if; 
         end if;
         
    when blue => 
         if prescaler < 650 + 250 + 650 + 250 + 650 then 
            -- setlling the signal    
            start_adc <= '0';
         elsif prescaler >=  650 + 250 + 650 + 250 + 650 then 
                if prescaler <  650 + 250 + 650 + 250 + 650 +250 then
                -- PWM  - 250 ticks
                -- ADC on
                 start_adc <= '1';
                end if; 
         end if;        
end case;
end process;
   

end Behavioral;
