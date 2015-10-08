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
    Port ( forward_i : in std_logic;
           reset_i : in std_logic;
           clk_50mhz : in std_logic;
           led_o : out std_logic_vector (5 downto 0) := (others => '0'));
end fsm;

architecture Behavioral of fsm is
    type machine_state is (reset, led0, led1, led2, led3, led4, led5);
    signal state, next_state : machine_state := reset;
    signal in_new, in_old, state_change : std_logic := '0';
begin
    
    statecase: process(clk_50mhz)
    begin
        if(rising_edge(clk_50mhz)) then
            case state is
                when reset => 
                    led_o <= "000000";
                    if(state_change = '1') then
                        next_state <= led0;
                    elsif(reset_i = '1') then
                        next_state <= reset;
                    end if;    
                when led0 =>
                    led_o <= "000001";
                    if(state_change = '1') then
                        next_state <= led1;
                    elsif(reset_i = '1') then
                        next_state <= reset;
                    end if;
                when led1 =>
                    led_o <= "000010";
                    if(state_change = '1') then
                        next_state <= led2;
                    elsif(reset_i = '1') then
                        next_state <= reset;                   
                    end if;
                when led2 =>
                    led_o <= "000100";
                    if(state_change = '1') then
                        next_state <= led3;
                    elsif(reset_i = '1') then
                        next_state <= reset;
                    end if;
                when led3 =>
                    led_o <= "001000";
                    if(state_change = '1') then
                        next_state <= led4;
                    elsif(reset_i = '1') then
                        next_state <= reset;                   
                    end if;
                when led4 =>
                    led_o <= "010000";
                    if(state_change = '1') then
                       next_state <= led5;
                    elsif(reset_i = '1') then
                       next_state <= reset;
                    end if;
                when led5 =>
                    led_o <= "100000";
                    if(state_change = '1') then
                        next_state <= reset;
                    elsif(reset_i = '1') then
                        next_state <= reset;
                    end if;                    
            end case;
        end if;
    end process;
    
    state_check : process(clk_50mhz, in_new, forward_i) 
    begin
        in_old <= in_new;
        in_new <= forward_i;
        if(in_old /= in_new and in_new = '1') then
            state_change <= '1';
        else
            state_change <= '0';
        end if;
        
        if(rising_edge(clk_50mhz)) then
            state <= next_state;
        end if;
    end process;
    
end Behavioral;
