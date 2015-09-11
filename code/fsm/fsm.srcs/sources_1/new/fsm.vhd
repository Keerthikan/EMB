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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fsm is
    Port ( forward_i : in STD_LOGIC;
           reset_i : in STD_LOGIC;
           clk_50mhz : in std_logic;
           led_o : out STD_LOGIC_VECTOR (5 downto 0));
end fsm;

architecture Behavioral of fsm is
    type machine_state is (reset, led0, led1, led2, led3, led4, led5);
    signal state, next_state : machine_state := reset;
begin
    statecase: process(clk_50mhz, state, forward_i)
    begin
        case state is
            when reset => 
                led_o <= "000000";
                if(forward_i = '1') then
                    next_state <= led0;
                end if;    
            when led0 =>
                led_o <= "000001";
                if(forward_i = '1') then
                    next_state <= led1;
                end if;
            when led1 =>
                led_o <= "000010";
                if(forward_i = '1') then
                    next_state <= led2;
                end if;
            when led2 =>
                led_o <= "000100";
                if(forward_i = '1') then
                    next_state <= led3;
                end if;
            when led3 =>
                led_o <= "001000";
                if(forward_i = '1') then
                    next_state <= led4;
                end if;
            when led4 =>
                led_o <= "010000";
               if(forward_i = '1') then
                    next_state <= led5;
                end if;
            when led5 =>
                led_o <= "100000";
                if(forward_i = '1') then
                    next_state <= reset;
                end if;                    
        end case;
    end process;
    
    state_check : process(clk_50mhz) 
    begin
        if(rising_edge(clk_50mhz)) then
            if(reset_i = '1') then
                state <= reset;
            else
                state <= next_state;
            end if;
        end if;
    end process;
      
end Behavioral;
