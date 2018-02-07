// OLED_I2C

//
// Arduino Uno:
// ----------------------
// Wire Display:  SDA pin   -> Arduino Analog 4 or the dedicated SDA pin
//                SCL pin   -> Arduino Analog 5 or the dedicated SCL pin



#include <OLED_I2C.h>

OLED  myOLED(SDA, SCL, 8);

extern uint8_t SmallFont[];

void setup()
{
  myOLED.begin();
  myOLED.setFont(SmallFont);
}

void loop()
{
  myOLED.clrScr();
  myOLED.print("HELLO WORLD!", LEFT, 0);
  myOLED.print("coded by:", CENTER, 16);
  myOLED.print("-underd0g", CENTER, 24);
  myOLED.update();
  delay (5000);
  

  
  
 
}


