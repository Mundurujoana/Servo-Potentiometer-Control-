
#include <Servo.h> //Access the Arduino servo library

Servo myservo; //creates servo object to control a servo.

int potpin=1;
int val; //variable to read the value from the analog pin

void setup()
{
  myservo.attach(9); //ensures an output to servo on pin 9
}

void loop(){
val = analogRead(potpin); //reads the value of the potentiometer from A1.
val = map(val,0,1023,0,90); //	converts readings from potentiometer to an output value in degrees of rotation the servo can understand.
  myservo.write(val); // sets the servo position according to the input from the potentiomete.
    delay(15); // waits 15s for the servo to get to set position.
}