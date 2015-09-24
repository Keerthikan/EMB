----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/10/2015 05:33:03 PM
-- Design Name: 
-- Module Name: fsm - Behavioral
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
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fsm is
    Port ( forward_i : in std_logic;
           reset_i : in std_logic;
           clk_50mhz : in std_logic;
           led_o : out std_logic_vector (5 downto 0));
end fsm;

architecture Behavioral of fsm is
    type state_type is (reset,led_1,led_2,led_3,led_4,led_5,led_6);  --type of state machine.
    signal state : state_type;
begin
    
    statecase: process(forward_i, reset_i)
    begin
        if (reset_i  = '0') then 
                state <= reset;
        elsif (falling_edge(forward_i)) then 
                case state is
                    when reset => state <= led_1;                                     
                    when led_1 => state <= led_2;
                    when led_2 => state <= led_3;
                    when led_3 => state <= led_4;
                    when led_4 => state <= led_5;
                    when led_5 => state <= led_6;
                    when led_6 => state <= led_1;
                end case;
         end if;
    end process;


    led: process(state)
    begin
        case state is 
            when reset => led_o<= "000000";
            when led_1 => led_o<= "000001";
            when led_2 => led_o<= "000010";
            when led_3 => led_o<= "000100";
            when led_4 => led_o<= "001000";
            when led_5 => led_o<= "010000";
            when led_6 => led_o<= "100000";
        end case;
    end process;    
    
    
    
end Behavioral;
