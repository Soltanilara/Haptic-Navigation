#include <AccelStepper.h>

const int stepsPerRevolution = 20;

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
const int button11Pin = 13;
const int button12Pin = 14;


AccelStepper motor1(AccelStepper::FULL4WIRE, motor1Pins[0], motor1Pins[1], motor1Pins[2], motor1Pins[3]);
AccelStepper motor2(AccelStepper::FULL4WIRE, motor2Pins[0], motor2Pins[1], motor2Pins[2], motor2Pins[3]);
AccelStepper motor3(AccelStepper::FULL4WIRE, motor3Pins[0], motor3Pins[1], motor3Pins[2], motor3Pins[3]);
AccelStepper motor4(AccelStepper::FULL4WIRE, motor4Pins[0], motor4Pins[1], motor4Pins[2], motor4Pins[3]);
AccelStepper motor5(AccelStepper::FULL4WIRE, motor5Pins[0], motor5Pins[1], motor5Pins[2], motor5Pins[3]);

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  pinMode(button5Pin, INPUT);
  pinMode(button6Pin, INPUT);
  pinMode(button7Pin, INPUT);
  pinMode(button8Pin, INPUT);
  pinMode(button9Pin, INPUT);
  pinMode(button10Pin, INPUT);
  
  motor1.setMaxSpeed(20);
  motor1.setAcceleration(4);
  motor2.setMaxSpeed(20);
  motor2.setAcceleration(4);
  motor3.setMaxSpeed(20);
  motor3.setAcceleration(4);
  motor4.setMaxSpeed(20);
  motor4.setAcceleration(4);
  motor5.setMaxSpeed(20);
  motor5.setAcceleration(4);
}

void loop() {
  if (digitalRead(button1Pin) == LOW) {
    motor1.runSpeed();
  }
  if (digitalRead(button2Pin) == LOW) {
    motor2.runSpeed();
  }
  if (digitalRead(button3Pin) == LOW) {
    motor3.runSpeed();
  }
  if (digitalRead(button4Pin) == LOW) {
    motor4.runSpeed();
  }
  if (digitalRead(button5Pin) == LOW) {
    motor5.runSpeed();
  }
  if (digitalRead(button6Pin) == LOW) {
    motor5.runSpeed();
  }
  if (digitalRead(button7Pin) == LOW) {
    motor5.runSpeed();
  }
  if (digitalRead(button8Pin) == LOW) {
    motor5.runSpeed();
  }
  if (digitalRead(button9Pin) == LOW) {
    motor5.runSpeed();
  }
  if (digitalRead(button10Pin) == LOW) {
    motor5.runSpeed();
  }

  if (digitalRead(button11Pin) == LOW) {
    motor1.runSpeed();
  }
  if (digitalRead(button12Pin) == LOW) {
    motor2.runSpeed();
  }

  if (digitalRead(button1Pin) == digitalRead(button2Pin)) {
    digitalWrite(46, HIGH);
  }
  if (digitalRead(button3Pin) == digitalRead(button4Pin)) {
    digitalWrite(47, HIGH);
  }
  if (digitalRead(button5Pin) == digitalRead(button6Pin)) {
    digitalWrite(49, HIGH);
  }
  if (digitalRead(button7Pin) == digitalRead(button8Pin)) {
    digitalWrite(51, HIGH);
  }
  if (digitalRead(button9Pin) == digitalRead(button10Pin)) {
    digitalWrite(53, HIGH);
  }

motor1.run();
motor2.run();
motor3.run();
motor4.run();
motor5.run();

}
