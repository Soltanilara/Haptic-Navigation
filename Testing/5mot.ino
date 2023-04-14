#include <AccelStepper.h>

const int stepsPerRevolution = 200;

const int motor1Pins[4] = {22, 23, 24, 25};
const int motor2Pins[4] = {26, 27, 28, 29};
const int motor3Pins[4] = {30, 31, 32, 33};
const int motor4Pins[4] = {34, 35, 36, 37};
const int motor5Pins[4] = {38, 39, 40, 41};

const int button1Pin = 3;
const int button2Pin = 4;
const int button3Pin = 5;
const int button4Pin = 6;
const int button5Pin = 7;
const int button6Pin = 8;
const int button7Pin = 9;
const int button8Pin = 10;
const int button9Pin = 11;
const int button10Pin = 12;

int motor_speed = 800;


AccelStepper motor1(AccelStepper::FULL4WIRE, motor1Pins[0], motor1Pins[1], motor1Pins[2], motor1Pins[3]);
AccelStepper motor2(AccelStepper::FULL4WIRE, motor2Pins[0], motor2Pins[1], motor2Pins[2], motor2Pins[3]);
AccelStepper motor3(AccelStepper::FULL4WIRE, motor3Pins[0], motor3Pins[1], motor3Pins[2], motor3Pins[3]);
AccelStepper motor4(AccelStepper::FULL4WIRE, motor4Pins[0], motor4Pins[1], motor4Pins[2], motor4Pins[3]);
AccelStepper motor5(AccelStepper::FULL4WIRE, motor5Pins[0], motor5Pins[1], motor5Pins[2], motor5Pins[3]);


void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);
  pinMode(button7Pin, INPUT_PULLUP);
  pinMode(button8Pin, INPUT_PULLUP);
  pinMode(button9Pin, INPUT_PULLUP);
  pinMode(button10Pin, INPUT_PULLUP);
 

}

void loop() {
switch (digitalRead(button1Pin)) {
  case LOW:
    motor1.setMaxSpeed(2000);
    motor1.setSpeed(motor_speed);
    motor1.runSpeed();
    //print(digitalRead(button1Pin));
    break;
  case HIGH:
    break;
}
switch (digitalRead(button2Pin)) {
  case LOW:
    motor1.setMaxSpeed(2000);
    motor1.setSpeed(-motor_speed);
    motor1.runSpeed();
    break;
  case HIGH:
    break;
}

switch (digitalRead(button3Pin)) {
  case LOW:
    motor2.setMaxSpeed(2000);
    motor2.setSpeed(motor_speed);
    motor2.runSpeed();
    //print(digitalRead(button1Pin));
    break;
  case HIGH:
    break;
}
switch (digitalRead(button4Pin)) {
  case LOW:
    motor2.setMaxSpeed(2000);
    motor2.setSpeed(-motor_speed);
    motor2.runSpeed();
    break;
  case HIGH:
    break;
}

switch (digitalRead(button5Pin)) {
  case LOW:
    motor3.setMaxSpeed(2000);
    motor3.setSpeed(motor_speed);
    motor3.runSpeed();
    //print(digitalRead(button1Pin));
    break;
  case HIGH:
    break;
}
switch (digitalRead(button6Pin)) {
  case LOW:
    motor3.setMaxSpeed(2000);
    motor3.setSpeed(-motor_speed);
    motor3.runSpeed();
    break;
  case HIGH:
    break;
}


switch (digitalRead(button7Pin)) {
  case LOW:
    motor4.setMaxSpeed(2000);
    motor4.setSpeed(motor_speed);
    motor4.runSpeed();
    //print(digitalRead(button1Pin));
    break;
  case HIGH:
    break;
}
switch (digitalRead(button8Pin)) {
  case LOW:
    motor4.setMaxSpeed(2000);
    motor4.setSpeed(-motor_speed);
    motor4.runSpeed();
    break;
  case HIGH:
    break;
}


switch (digitalRead(button9Pin)) {
  case LOW:
    motor5.setMaxSpeed(2000);
    motor5.setSpeed(motor_speed);
    motor5.runSpeed();
    //print(digitalRead(button1Pin));
    break;
  case HIGH:
    break;
}
switch (digitalRead(button10Pin)) {
  case LOW:
    motor5.setMaxSpeed(2000);
    motor5.setSpeed(-motor_speed);
    motor5.runSpeed();
    break;
  case HIGH:
    break;
}


// stop
switch (digitalRead(button1Pin) == digitalRead(button2Pin)) {
  case true:
    digitalWrite(46, LOW);
    break;
  case false:
    break;
}

switch (digitalRead(button3Pin) == digitalRead(button4Pin)) {
  case true:
    digitalWrite(47, LOW);
    break;
  case false:
    break;
}

switch (digitalRead(button5Pin) == digitalRead(button6Pin)) {
  case true:
    digitalWrite(49, LOW);
    break;
  case false:
    break;
}

switch (digitalRead(button7Pin) == digitalRead(button8Pin)) {
  case true:
    digitalWrite(51, LOW);
    break;
  case false:
    break;
}

switch (digitalRead(button9Pin) == digitalRead(button10Pin)) {
  case true:
    digitalWrite(53, LOW);
    break;
  case false:
    break;
}




}
