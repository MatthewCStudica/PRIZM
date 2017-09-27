#include <Wire.h>

#include <PRIZM.h>
PRIZM prizm;


//March, 2014

#include <Servo.h>
#include <MINDSi.h>
/***************************************************
/ MINDS-i Radio Drive Application. mymindsi.com
/
/This Simple Radio Drive Application code
/is a basic example of how to incorporate
/your Radio Transmitter and Receiver in
/the Arduino code.  In this code your rover
/will be controlled manually by your radio
/transmitter.
/***************************************************/

Servo drive, steer;
int driveSig, steerSig, servoSig;

int Drive = 0;
int Turn = 0;
int servo = 0;

void setup() {
  drive.attach(4); //set a pin for the ESC/steering servo to use
  steer.attach(5);
prizm.PrizmBegin();
  drive.write(90); //set the output for the ESC/servo
  steer.write(90);
Serial.begin(9600);
  delay(2000); //delay 2 seconds for arming
}

void loop() {
  servoSig = getRadio(A1);
  driveSig = getRadio(A2);
  steerSig = getRadio(A3);

Drive = map(driveSig,0,180,-100,100);
Turn = map(steerSig,0,180,-100,100);
servo = map(servoSig,45,120,0,180);
delay(10);
prizm.setMotorPower(1,Drive);
delay(10);
prizm.setMotorPower(2,Turn);

prizm.setServoPosition(1,servoSig);

Serial.println(servo);
}
