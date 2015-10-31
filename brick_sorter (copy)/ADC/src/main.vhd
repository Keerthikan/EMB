----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/07/2015 10:57:05 PM
-- Design Name: 
-- Module Name: main - Behavioral
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
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_logic_unsigned.all;
use ieee.numeric_std.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity main is
    Port ( MISO : in STD_LOGIC;
           MOSI : out STD_LOGIC;
           CS : out STD_LOGIC;
           SCLK : out STD_LOGIC;
           CLK : in STD_LOGIC;
           debug_led: out std_logic_vector(9 downto 0);
           debug_TX: out std_logic_vector(7 downto 0)
           );
end main;

architecture Behavioral of main is
--signal prescaler : integer range 0 to 3500000 := 3500000 ;
constant N : integer := 4;
signal prescaler_counter : integer range 0 to 50000000 := 0;
signal newClock : std_logic := '0';
signal TX :std_logic_vector(N downto 0) := "11000";
--signal TX :std_logic_vector(11 downto 0) := "000000011000";
signal RX : std_logic_vector(9 downto 0) := "0000000000";
type state_type is (start,state2,state3,state4,state5,state6);  --type of state machine.
type TXRX  is (waiting, working); 
signal state : state_type := start;
signal shift_counter: integer range 0 to 750:= N;
begin

prescaler01: process(clk, newClock)
begin
    if rising_edge(clk) then 
        if prescaler_counter < 19 then -- 14
            prescaler_counter <= prescaler_counter + 1;
        else
            newClock <= not newClock;
            prescaler_counter <= 0;
       end if;
    end if;            
end process;

SCLK <= newClock;

-- FPGA transmit data on falling_edge
-- FPGA reads data on rising_edge


SPI_state: process(newClock)
begin
   if falling_edge(newClock) then      -- ADC læser på rising, derfor sendes på falling edge  
        case state is   
            when start =>
                debug_TX <= "00000001";
                CS <= '1';
                MOSI <= '0';
                RX <= "0000000000";
            state <= state2;
            when state2 => -- Send init bits. 
                debug_TX <= "00000010";
                CS <= '0';
                shift_counter <= shift_counter - 1;
                TX <= TX(N-1 downto 0) & TX(N); 
                MOSI <= TX(N);
                if shift_counter = 0 then 
                   MOSI <= '0';
                   shift_counter<= 9;
                   state <= state3;
                end if;
            when state3 =>
                debug_TX <= "00000100";
                --MOSI <= '0';
                CS <= '0';              -- Last bit init bit;
                state <= state4; 
            when state4=>
                debug_TX <= "00010000";
                CS <= '0';              --T_sample from falling - falling
                state <= state6;     
            when state6=>
               debug_TX <= "00100000";
               CS <= '0';              -- Read
               shift_counter <= shift_counter - 1;
                RX <=  RX(8 downto 0) & MISO;
                debug_led <= RX; 
                if shift_counter = 0 then
                    MOSI <= '0';
                    shift_counter<= N;
                    state <= start;
                end if;
            when others =>    
                 debug_TX <= "11111111";             
                state <= start;           
        end case;
    end if;  
end process;


end Behavioral;
