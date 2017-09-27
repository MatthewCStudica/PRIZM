/*  PRIZM Controller example program
 *  Blink the PRIZM red LED at a 1 second flash rate
 *  author PWU on 08/05/2016
*/
  
  #include <PRIZM.h>      // include the PRIZM library

  PRIZM prizm;            // instantiate a PRIZM object "prizm" so we can use its functions

void setup() {

   prizm.PrizmBegin();   // initialize the PRIZM controller



}
int ldelay;
void loop() {     // repeat this code in a loop

   
for (ldelay = 100; ldelay <1000; ldelay = ldelay + 200){

  
  prizm.setRedLED(HIGH);    // turn the RED LED on
  delay(ldelay);              // wait here for 1000ms (1 second)
  prizm.setRedLED(LOW);     // turn the RED LED off
  delay(ldelay);              // wait here for 1000ms (1 second)
 prizm.setGreenLED(HIGH);    // turn the GREEN LED on
  delay(ldelay);              // wait here for 1000ms (1 second)
  prizm.setGreenLED(LOW);     // turn the GREEN LED off
  delay(ldelay);              // wait here for 1000ms (1 second)
}
}










