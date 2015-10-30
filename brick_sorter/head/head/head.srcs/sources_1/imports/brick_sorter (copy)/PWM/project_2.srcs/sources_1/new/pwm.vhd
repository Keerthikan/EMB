----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/23/2015 05:27:10 PM
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
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity pwm is
   Port
      (
         CLK : in STD_LOGIC;
         PWM_motor : out std_logic;
         direc: in std_logic
       );
end pwm;

architecture Behavioral of pwm is

begin
process (clk, pwm_motor_on)
	--variable to count the clock pulse
variable count : integer range 0 to 1000000;
variable count_n: integer range 0 to 1000000;
begin
if (rising_edge(CLK)) then
    count:= count+1;if count = 1000000 then
				count:= 0;
			end if;		
    case direc is
		    --increasing the count for each clock cycle
				
			case direc is
			 when '1' =>
			     if count < 960000 then    --  900000, 950000 , 960000
            	     PWM_motor <= '0';
                 else 
            	     PWM_motor <= '1';
                 end if;
			 when '0' =>
			     if count < 900000 then    --  900000, 950000 , 960000
                    PWM_motor <= '0';
                 else 
                     PWM_motor <= '1';
                 end if;
              when others =>
                 if count < 950000 then    --  900000, 950000 , 960000
                       PWM_motor <= '0';
                 else 
                       PWM_motor <= '1';
                 end if;        
	        end case;			
		end if;
elsif pwm_motor_on = '0' then 
        if rising_edge(clk) then 
            count_n:= count_n +1;
            if count_n = 1000000 then 
                count_n:= 0;
            elsif count_n < 950000 then    --  900000, 950000 , 960000
                 PWM_motor <= '0';
            else 
                 PWM_motor <= '1';
            end if;        
	   end if;
end if;  		
end process;

end Behavioral;
