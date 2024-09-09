//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(5,0);
  lcd.print("My name is");
  lcd.setCursor(6,1);
  lcd.print("Andreas");
   lcd.setCursor(2,2);
  lcd.print("I'm 26 years old");
   lcd.setCursor(0,3);
  lcd.print("I was born in Hobro");
}


void loop()
{
}
