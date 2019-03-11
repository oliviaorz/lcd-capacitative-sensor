
/*
  LiquidCrystal Library - Hello World
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 This sketch prints "Hello World!" to the LCD
 and shows the time.
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>
#include <CapacitiveSensor.h>


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


//CapacitiveSensor   cs_10_9 = CapacitiveSensor(10,9);        // 10M resistor between pins 10 & 9, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_4_6 = CapacitiveSensor(4,6);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil
//CapacitiveSensor   cs_4_8 = CapacitiveSensor(4,8);        // 10M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil


void setup() {
  // set up the LCD's number of columns and rows: 

     Serial.begin(9600);
     
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello world!");
//  lcd.print("oh sweet spontaneous earth how often have the doting fingers of prurient philosophers pinched and poked thee, has the naughty thumb of science prodded thy beauty.how often have religions taken thee upon their scraggy knees squeezing and buffeting thee that thou mightest conceive gods but true to the incomparable couch of death thy rhythmic lover thou answerest them only with spring");
lcd.setCursor(0, 1);
  
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
 // lcd.setCursor(0, 1);
  // print the number of seconds since reset:
 // lcd.print(millis()/1000);

  long start = millis();
   // long total1 =  cs_10_9.capacitiveSensor(30);
    long total1 =  cs_4_6.capacitiveSensor(30);
    //long total1 =  cs_4_8.capacitiveSensor(30);

//     Serial.print(millis() - start);        // check on performance in milliseconds
    //Serial.print("\t");                    // tab character for debug windown spacing

/  Serial.println(total1);                  // print sensor output 1
   Serial.print("\t");
    //Serial.print(total2);                  // print sensor output 2
    //Serial.print("\t");
    //Serial.println(total3);                // print sensor output 3

    //delay(10);   // arbitrary delay to limit data to serial port 

 //   if(total1<3000 && total1>100000) {
 //      lcd.noDisplay();
 // delay(500);
    }
     
 //  else if (total1<500 && total1>10000000) {
//    lcd.display();
 // delay(500);
//  lcd.begin(16, 2);
  // Print a message to the LCD.
//  lcd.print("hello world!");
//{  lcd.print("oh sweet spontaneous earth how often have the doting fingers of prurient philosophers pinched and poked thee, has the naughty thumb of science prodded thy beauty.how often have religions taken thee upon their scraggy knees squeezing and buffeting thee that thou mightest conceive gods but true to the incomparable couch of death thy rhythmic lover thou answerest them only with spring");
//}

//   }
     
