#include <IRremote.h>
#include <avr/pgmspace.h>
#include "stuff.h"
#include <SoftwareSerial.h>

SoftwareSerial lcd(9,12);

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

boolean isplaying = false;
int currVol = 50;

/* Ignore this, this is something else i was working on

char string[20];
int strpos;

int reading = 0;

char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int lastbutton = 0;
int button = 0;
*/
void setup(){
  Serial.begin(9600);
  lcd.begin(9600);
  
  irrecv.enableIRIn(); // Start the receiver
  STRIP_PINOUT;        // set output pin - DEBUG: should auto detect which mother board for use

  reset_strip();
  
  initLCD();
  
}

void loop(){
  // If we get an IR signal decode and...
  lcdOutput();
  if (irrecv.decode(&results)) {
     Serial.println(results.value);
    // Print serial messages accordingly
    switch(results.value){
      
      //Power
      case 87604353:
        //Serial.flush();    
        Serial.print('P');
      break;
      
      //UP
      case 87609330:
        printSkipF();
        Serial.print('U');
      break;
      
      //DOWN
      case 87576434:
        printSkipB();
        Serial.print('D');
      break;
      
      //ENTER
      case 87613410:
        if(isplaying)
          isplaying = false;
        else
          isplaying = true;
          
        Serial.print('E');
      break;
      
      case 87558197:
        send_1M_pattern(pattern_test_rainbow, 10, 70);
      break;
      
      case 87591093:
        send_1M_pattern(bigrainbow, 60, 70);
      break;

      case 87574645:
        send_1M_pattern(rainbowkit, 54, 70);
      break;
      
      case 83887105:
        currVol += 5;
        if(currVol > 100)
          currVol = 100;
          
        Serial.print('V');
      break;
      
      case 83920001:
        currVol -= 5;
        if(currVol < 0)
          currVol = 0;
        Serial.print('v');
      break;
      
      default:
        Serial.println(results.value);
      break;
        
    
  }
    
      
    //Serial.println(results.value, DEC);
    irrecv.resume(); // Receive the next value
  }
} 
  /*
  button = digitalRead(2);
  
  
  reading = map(analogRead(A0),0,1023,0,26);
  
  
  if(button != lastbutton)
    if(!button){
      string[strpos++] = letters[reading];
      Serial.flush();
      Serial.print(":");
      Serial.print(string);
      Serial.println(":");
    }
  
  
  lastbutton = button;
  
  */
void send_1M_pattern(const unsigned long data[][10], int pattern_no, int frame_rate)
{
  int i=0;
  int j=0;
  uint32_t temp_data;

  for (i=0;i<pattern_no;i++)
  {
    noInterrupts();
    for (j=0;j<10;j++)
    {
      temp_data=pgm_read_dword_near(&data[i][j]);
      send_strip(temp_data);
    }
    interrupts();

    delay(frame_rate);

  }




}


/*******************************************************************************
 * Function Name  : send_strip
 * Description    : Transmit 24 pulse to LED strip
 *                  
 * Input          : 24-bit data for the strip
 *                  
 * Output         : None
 * Return         : None
 *******************************************************************************/
void send_strip(uint32_t data)
{
  int i;
  unsigned long j=0x800000;
  
 
  for (i=0;i<24;i++)
  {
    if (data & j)
    {
      DATA_1;
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");    
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      
/*----------------------------*/
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");  
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");  
      __asm__("nop\n\t");  
      __asm__("nop\n\t");        
/*----------------------------*/      
      DATA_0;
    }
    else
    {
      DATA_1;
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");    
      DATA_0;
/*----------------------------*/      
       __asm__("nop\n\t");
      __asm__("nop\n\t");
      __asm__("nop\n\t");      
/*----------------------------*/         
    }

    j>>=1;
  }


  
}

/*******************************************************************************
 * Function Name  : reset_strip
 * Description    : Send reset pulse to reset all color of the strip
 *                  
 * Input          : None
 *                  
 * Output         : None
 * Return         : None
 *******************************************************************************/
void	reset_strip()
{
  DATA_0;
  delayMicroseconds(20);
}

void printSkipF(){
  lcd.write(12);
  lcd.write(3);  
} 

void printSkipB(){
  lcd.write(12);
  lcd.write(4); 
}

void initLCD(){
//Turn on Backlight
        lcd.write(17);
//No cursor or blink
        lcd.write(22);
//Clear Screen
        lcd.write(12);

	
	
//Pause Character
	lcd.write(249);
	lcd.write(27);
	lcd.write(27);
	lcd.write(27);
	lcd.write(27);
	lcd.write(27);
	lcd.write(27);
	lcd.write(27);
	lcd.write(27);

//Play Character
	lcd.write(250);
	lcd.write(8);
	lcd.write(12);
	lcd.write(14);
	lcd.write(15);
	lcd.write(15);
	lcd.write(14);
	lcd.write(12);
	lcd.write(8);

//Skip Forward
	lcd.write(251);
	lcd.write(17);
	lcd.write(25);
	lcd.write(29);
	lcd.write(31);
	lcd.write(31);
	lcd.write(29);
	lcd.write(25);
	lcd.write(17);

//Skip Backward
	lcd.write(252);
	lcd.write(17);
	lcd.write(19);
	lcd.write(23);
	lcd.write(31);
	lcd.write(31);
	lcd.write(23);
	lcd.write(19);
	lcd.write(17);
  
}

void lcdOutput(){
        lcd.write(12);
	if(isplaying == true)
		lcd.write(2);
	else
		lcd.write(1);

	lcd.write("\tVolume: ");
	lcd.write(currVol);
}
