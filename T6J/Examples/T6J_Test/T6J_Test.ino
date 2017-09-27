/*
 * Example file for using T6J with arduino
 * Written by: James Taylor
 * Date: 08/30/2016
 * 
 * Syntex
 * 
 * getChannel(int pin); 
 * returns the raw data from any channel 
 * depending on which pin it is on.
 * 
 * getChannel5(int pin);
 * returns a boolean high or low as channel 5
 * is just a switch
 */

// Include the library
#include <T6J.h>

// Declare a new radio
T6J radio;

/*
 *  Define Pins 
 */
#define CH1 3
#define CH2 9
#define CH3 4
#define CH4 5
#define CH5 2
#define CH6 6

/* 
 *  Global Constants
 */
  int ch1;   
  int ch2;
  int ch3;
  int ch4;
  int ch6;
  boolean ch5;

// Setup serial 
void setup() {
 Serial.begin(9600);
}

// Main loop
void loop() {
  // Get data
  ch1 = radio.getChannel(CH1);
  ch2 = radio.getChannel(CH2);
  ch3 = radio.getChannel(CH3);
  ch4 = radio.getChannel(CH4);
  ch5 = radio.getChannel5(CH5);
  ch6 = radio.getChannel(CH6);

  // Output to serial
  Serial.print("Channel 1:"); // Print the value of 
  Serial.println(ch1);        // each channel
  Serial.print("Channel 2:"); 
  Serial.println(ch2);        
  Serial.print("Channel 3:");  
  Serial.println(ch3);        
  Serial.print("Channel 4:");  
  Serial.println(ch4);        
  Serial.print("Channel 5:"); 
  Serial.println(ch5);        
  Serial.print("Channel 6:");  
  Serial.println(ch6);   

  // Delay to slow down the output window
  delay(4000);
}
/*
 * End
 */
