#include <AccelStepper.h>

const int stepsPerRevolution = 200;

const int motor1Pins[4] = {22, 23, 24, 25};
const int button1Pin = 3;
const int button2Pin = 4;


int motor_speed = 2500;


AccelStepper motor1(AccelStepper::FULL4WIRE, motor1Pins[0], motor1Pins[1], motor1Pins[2], motor1Pins[3]);


void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(53, OUTPUT);


}

void loop() {


    switch (digitalRead(button1Pin)) {
    case LOW:
      digitalWrite(53, HIGH);
      motor1.setMaxSpeed(13500);
      motor1.setSpeed(motor_speed);
      motor1.runSpeed();
      break;
    case HIGH:
      break;
  }
  switch (digitalRead(button2Pin)) {
    case LOW:
      digitalWrite(53, HIGH);
      motor1.setMaxSpeed(13500);
      motor1.setSpeed(-motor_speed);
      motor1.runSpeed();
      break;
    case HIGH:
      break;
  }

switch (digitalRead(button1Pin) == digitalRead(button2Pin)) {
  case true:
    digitalWrite(53, LOW);
    break;
  case false:
    break;
}
}
