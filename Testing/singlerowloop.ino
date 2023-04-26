#include <AccelStepper.h>

const int stepsPerRevolution = 20;

const int motor1Pins[4] = {22, 23, 24, 25};

int motor_speed = 2000;
float v1;
float v2;
AccelStepper motor1(AccelStepper::FULL4WIRE, motor1Pins[0], motor1Pins[1], motor1Pins[2], motor1Pins[3]);

void setup() {
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);

  pinMode(53, OUTPUT);
  motor1.setMaxSpeed(2000);
  motor1.setSpeed(motor_speed);
  motor1.setAcceleration(7500);

}

void loop() {
  v1 = analogRead(A1);
  v2 = analogRead(A2);
  
  digitalWrite(53, HIGH);
  motor1.moveTo(400);
  motor1.runToPosition();
  Serial.println("V1: ");
  Serial.println(v1);
  Serial.println("V2: ");
  Serial.println(v2);
  digitalWrite(53, LOW);

  delay(2000); 
  
  digitalWrite(53, HIGH);

  motor1.moveTo(0);
  motor1.runToPosition(); 
   Serial.println("V1: ");
  Serial.println(v1);
  Serial.println("V2: ");
  Serial.println(v2);
  digitalWrite(53, LOW);
  delay(2000); 
  
}
