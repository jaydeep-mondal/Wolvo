#include <Servo.h>

Servo myservo;

int trigger;

void setup() {

  pinMode(4, INPUT_PULLUP);

  myservo.attach(8);
  myservo.write(160);
  delay(3000);
  myservo.write(100);
  


}

void loop() {

  trigger = digitalRead(4);
  if (trigger == 0) {
    myservo.write(160);
  }


}
