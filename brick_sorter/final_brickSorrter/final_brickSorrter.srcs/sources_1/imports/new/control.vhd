----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/28/2015 12:24:07 AM
-- Design Name: 
-- Module Name: control - Behavioral
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

entity control is
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
           
           --PWM_motor : out std_logic;
           
           Out_next_state: out std_logic;
           
           XB_SERIAL_I  : in	STD_LOGIC;     -- Serial stream from PC
           XB_SERIAL_O  : out	STD_LOGIC    -- Serial stream to PC
           --stateS: out std_logic_vector(2 downto 0);
           --nextState: out std_logic;
           --adc_on : out std_logic --
         );
end control;

architecture Behavioral of control is
    component adc port ( 
               MISO : in STD_LOGIC;
               MOSI : out STD_LOGIC;
               CS : out STD_LOGIC;
               SCLK : out STD_LOGIC;
               CLK : in STD_LOGIC;
               read_adc: out std_logic;
               start_adc: in std_logic;
               ADC_value: out std_logic_vector(9 downto 0)      
          );
    end component;
    
    component led_driver 
        port (
         CLK : in STD_LOGIC;
         led_red : out STD_LOGIC;
         led_green: out std_logic;
         led_blue: out std_logic;
         start_ADC : out std_logic ;
         --adc_read : in std_logic;  --
         --req_next_state: out std_logic; -- 
         led_on: in std_logic;
         stateS: out std_logic_vector(1 downto 0);
         next_state: in std_logic   
         --adc_on : out std_logic
        );
        end component;
      
      component uTosNet is      -- PTNX = "Pseudo TosNet eXample"
        Port ( 
               CLK_50M_I	: in	STD_LOGIC;    -- 50 MHz from onboard oscillator
        	   XB_SERIAL_I  : in	STD_LOGIC;     -- Serial stream from PC
        	   XB_SERIAL_O  : out	STD_LOGIC;    -- Serial stream to PC
        	   adc          : in   std_logic_vector(9 downto 0);
        	   red          : in   std_logic_vector(9 downto 0);
        	   green        : in   std_logic_vector(9 downto 0);
        	   blue         : in   std_logic_vector(9 downto 0)
        	  );
      end component;
     
--     component pwm 
--        port (
--          CLK : in std_logic;
--          PWM_motor : out std_logic;
--          direc: in std_logic        
--        );    
--     end component;
--Signals for ADC--   
signal adc_value_sig: std_logic_vector(9 downto 0);
signal read_adc_sig: std_logic; -- 
signal start_adc_sig: std_logic;
signal adc_value_temp_sig: std_logic_vector(9 downto 0); ---------------------------------------------------------

-- Signals for Led_Driver
--signal start_adc_sig: std_logic;
signal adc_read_sig: std_logic;
signal led_on_sig:  std_logic;
signal stateS_sig: std_logic_vector(1 downto 0);
signal next_state_sig: std_logic;
--signal adc_on_sig: std_logic;

----Signal for PWM_motor
signal direc: std_logic; 


-- Signals for controls
signal redCount: integer range 0 to 100;
signal greenCount: integer range 0 to 100;
signal blueCount:    integer range 0 to 100;


--Signals for µtosNET
signal XB_SERIAL_I_sig: std_logic;
signal XB_SERIAL_O_sig: std_logic;
signal ADC_VAlUE_RED_sig: std_logic_vector(9 downto 0);
signal ADC_VAlUE_GREEN_sig: std_logic_vector(9 downto 0);
signal ADC_VAlUE_BLUE_sig: std_logic_vector(9 downto 0);

begin

ADC01: adc port map(
         MISO   =>  MISO,
         MOSI   => MOSI,
         CS     => CS,
         SCLK   => SCLK,  
         CLK    => CLK, 
         read_adc => read_adc_sig,
         start_adc => start_adc_sig, 
         ADC_value => adc_value_sig
        );
        
LED01: led_driver port map(
        CLK => CLK,
        led_red => led_red,
        led_green => led_green,
        led_blue  => led_blue,
        start_adc => start_adc_sig,
       -- adc_read => adc_read_sig,
       -- req_next_state => req_next_state_sig,
        led_on => led_on_sig,
        stateS => stateS_sig,
        next_state => next_state_sig
        --adc_on  => adc_on_sig
        );        

--SERVO01: pwm port map(
--            CLK => CLK, 
--            PWM_motor => PWM_motor,
--            direc => direc_sig
--        );

UTOSNET01: uTosNet port map(
        CLK_50M_I	 => CLK,
        XB_SERIAL_I  => XB_SERIAL_I,
        XB_SERIAL_O  => XB_SERIAl_O,
        adc => adc_value_sig,         
        red => ADC_VAlUE_RED_sig,        
        green  => ADC_VAlUE_GREEN_sig,      
        blue => ADC_VAlUE_BLUE_sig             
        );

readBlock: process(clk,read_adc_sig, adc_value_sig,led_on_sig,redCount,greenCount,blueCount)
--readBlock: process(clk)
--readBlock: process(clk,read_adc_sig, adc_value_sig,led_on_sig,redCount,greenCount,blueCount)
variable iterations: integer range 0 to 40 :=0 ;
begin
if rising_edge(clk) then 
    if iterations < 30 then 
    --    led_on_sig <= '1';
    elsif iterations >= 30 then 
    --    led_on_sig <= '0';        
        if redCount < greenCount then 
            if greenCount > blueCount then 
                MAX_LED_r <= '0';
                MAX_LED_g <= '0';
                MAX_LED_b <= '0';
                --GreenCount max
                --Måler forkert
                 direc <= "11";
             end if;   
        elsif redCount < blueCount then 
            if  blueCount > greenCount then 
                MAX_LED_r <= '1';
                MAX_LED_g <= '0';
                MAX_LED_b <= '1';                
                -- BlueCount max
                direc_sig <=  "01";
            end if;
        elsif greenCount < redCount then 
            if redCount > blueCount then 
                MAX_LED_r <= '0';
                MAX_LED_g <= '1';
                MAX_LED_b <= '0'; 
                -- redCount max
                direc <= "00";
            end if;         
     end if;        
        redCount <= 0;
        blueCount <= 0;
        greenCount <= 0;                
        
        iterations:=0;
        
    end if;    
   -- if led_on_sig = '1' then   
          if read_adc_sig = '1' then      
            case stateS_sig is 
                when "10"  => 
                    if adc_value_sig = "1111111111" then 
                        redCount <= redCount +1;
                        adc_read_sig <= '1';
                        iterations := iterations + 1;                     
                    elsif adc_value_sig = "0000000000" then 
                        blueCount <= blueCount +1;
                        adc_read_sig <= '1';
                        iterations := iterations + 1; 
                    else
                        greenCount <= greenCount +1; 
                        adc_read_sig <= '1';
                        iterations := iterations + 1; 
                    end if;
                when "01" =>
                    if adc_value_sig = "1111111111" then 
                        redCount <= redCount +1;
                        adc_read_sig <= '1';
                        iterations := iterations + 1;                     
                    elsif adc_value_sig = "0000000000" then 
                         blueCount <= blueCount +1;
                         adc_read_sig <= '1';
                         iterations := iterations + 1; 
                    else
                         greenCount <= greenCount +1; 
                         adc_read_sig <= '1';
                         iterations := iterations + 1; 
                    end if; 
                 when "11" => 
                    if adc_value_sig = "1111111111" then 
                        redCount <= redCount +1;
                        adc_read_sig <= '1';
                        iterations := iterations + 1;                     
                    elsif adc_value_sig = "0000000000" then 
                        blueCount <= blueCount +1;
                        adc_read_sig <= '1';
                        iterations := iterations + 1; 
                    else
                        greenCount <= greenCount +1; 
                        adc_read_sig <= '1';
                        iterations := iterations + 1; 
                    end if;
                  when others => 
                    if adc_value_sig = "1111111111" then 
                          redCount <= redCount +1;
                          adc_read_sig <= '1';
                          iterations := iterations + 1;                     
                    elsif adc_value_sig = "0000000000" then 
                          blueCount <= blueCount +1;
                          adc_read_sig <= '1';
                          iterations := iterations + 1; 
                    else
                          greenCount <= greenCount +1; 
                          adc_read_sig <= '1';
                          iterations := iterations + 1; 
                    end if;  
            end case;                                                          
            -- delay to settle LED, so ADC turned off--
          elsif read_adc_sig = '0' then      
                adc_read_sig <= '0'; 
          end if;                       
                  
        if adc_read_sig = '1'  then 
            next_state_sig <= '1'; -- Saying start next state => turn off start_adc... 
        else 
            next_state_sig <= '0'; 
        end if; 
   -- else
   --     next_state_sig <= '0'; -- Saying start next state => turn off start_adc... 
    --end if;
 end if;   
end process;

--out_next_state <= next_state_sig; 
--pwm_motor <= '1';


pwm01: process (clk)
	--variable to count the clock pulse
variable count : integer range 0 to 1000000; --- (1/50 000 0000)/0.02  = 1000000
begin
if (rising_edge(CLK)) then
    count:= count+1;
    if count = 1000000 then
		count:= 0;
	end if;	
end if;  		
    case direc is
		    --increasing the count for each clock cycle				
			 when "11" =>
			     if count < 960000 then    --  900000, 950000 , 960000
            	     out_next_state <= '0';
                 else 
            	     out_next_state <= '1';
                 end if;
			 when "00" =>
			     if count < 900000 then    --  900000, 950000 , 960000
                    out_next_state <= '0';
                 else 
                     out_next_state <= '1';
                 end if;
              when others =>
                 if count < 950000 then    --  900000, 950000 , 960000
                       out_next_state <= '0';
                 else 
                       out_next_state <= '1';
                 end if;        
	        end case;			
end process;

end Behavioral;