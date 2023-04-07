#include <Stepper.h>
int pinA = 48; //  CLK 
int pinB = 50; //  DT
int encoderPosCount = 0;
int pinALast;
int aVal;
boolean bCW;
const int motorPin1 = 44;
const int motorPin2 = 45;
const int motorPin3 = 42;
const int motorPin4 = 43;
const int stepsPerRevolution = 20; 
int direc =0;

Stepper myStepper(stepsPerRevolution, motorPin1, motorPin2, motorPin3, motorPin4);
int encoder_stepsToMove = 10;
int button_stepsToMove = (3*60 * stepsPerRevolution) / 360;
int motor_speed = 60;
int encoder_time_delay = 2*3600*encoder_stepsToMove/(stepsPerRevolution * motor_speed);
int button_time_delay = 2*3600*button_stepsToMove /(stepsPerRevolution * motor_speed);

const int button1Pin = 13;

void setup() {
     pinMode (pinA,INPUT);
     pinMode (pinB,INPUT);
     pinMode(button1Pin,INPUT);
     myStepper.setSpeed(motor_speed);
     pinALast = digitalRead(pinA);
     Serial.begin (19200);
     
}

void loop() 
{
 aVal = digitalRead(pinA);
 if (aVal != pinALast){ // Means the knob is rotating
 // if the knob is rotating, we need to determine direction
 // We do that by reading pin B.
    if (digitalRead(pinB) != aVal) {
        encoderPosCount ++;
        bCW = true;
        direc = 1;
    } 
    else {
        bCW = false;
        encoderPosCount--;
        direc = 2;
    }
 Serial.print ("Rotated: ");
    if (bCW){
        Serial.println ("clockwise");
        myStepper.step(encoder_stepsToMove);
    }
    else{
        Serial.println("counterclockwise");
        myStepper.step(-encoder_stepsToMove);
    }
    Serial.print("Encoder Position: ");
    Serial.println(encoderPosCount);

    }else if(digitalRead(button1Pin) == LOW){
     myStepper.step(button_stepsToMove);
  }
  else{
    if(digitalRead(button1Pin) != LOW){
     digitalWrite(2, HIGH);
      Serial.println("Pin2 High");
    }
  }
 pinALast = aVal;


}
