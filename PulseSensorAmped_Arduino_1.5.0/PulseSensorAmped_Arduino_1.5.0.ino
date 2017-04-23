/*  
Pulse Sensor Amped 1.5    by Joel Murphy and Yury Gitman   http://www.pulsesensor.com

Modificado: Marcos Trampal marcos.trfn@gmail.com
Eliminando codigo led blink y modificando funciones
---------------------------------------------------------------------------------------------------------
This code:
3) Determines BPM
4) Prints All of the Above to Serial

Read Me:
https://github.com/WorldFamousElectronics/PulseSensor_Amped_Arduino/blob/master/README.md
---------------------------------------------------------------------------------------------------------
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x20 for a 16 chars and 2 line display


void setup(){
  Serial.begin(115200);             // we agree to talk fast!
  interruptSetup();                 // sets up to read Pulse Sensor signal every 2mS
  
  
  lcd.init();						// initialize the lcd
									// Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Marcos Trampal");
  lcd.setCursor(0, 1);
  lcd.print("Arduino");
  lcd.setCursor(0, 2);
  lcd.print("Frecuencia cardiaca"); 
}


void loop(){
	controlLatido();
	delay(20); 	//  take a break
}
