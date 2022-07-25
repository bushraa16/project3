# part1
## servo motor......
### the project explan how to connect servo motor with arduno uno use tinkercad and In reality
## step1 use tinkercad
#### insert Urdino uno 
#### insert resistor
 #### insert potentiometer
 #### insert breadboard small
####  botao 3
#### redLed 12
#### greenLed 11
#### blueLed 13
#### potPin A0

## step 2
### write the code 
```
#include <Servo.h>
#define botao 3
#define redLed 12
#define greenLed 11
#define blueLed 13
#define potPin A0

int pot, grau;
Servo servoMotor;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  servoMotor.attach(6);
  
  Serial.begin(9600);
}

void loop()
  
{
  
  pot = analogRead(potPin);
  
  grau = map(pot, 0, 1023, 0, 255);
  servoMotor.write(grau); //escreve posicao em graus
  
  Serial.print("pwm: ");
  Serial.println(grau);
  delay(100);
  
  if(grau < 127)
  {
   
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, HIGH);
  }
  
  else if(grau > 122 && grau < 200)
  {
    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  }
  
  else
  {
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
  }
    
}
```
## step 3
### run the code
![servo motor](https://user-images.githubusercontent.com/79949101/180874858-a3a6e0ac-1d05-4bf2-89af-7b9928cb003a.jpg)

https://user-images.githubusercontent.com/79949101/180876871-2ee58796-6d58-4762-bfd2-40a7dc164aea.MP4
## servo motor in  reality
## step1 
#### insert Urdino uno 
####  labtop
####   wire connecting arduino to laptop
####  Ground
#### Digital pin 9
#### 5V

## step 2
### write the code 
```
#include <Servo.h>
int pos=0;
Servo servo1; 

void setup() {
  servo1.attach(9);  
  servo1.write(180); 
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { 
      delay(10);                
  }
  for (pos = 90; pos >= 0; pos -= 1) { 
      delay(10);                   
  }
}
```
## step 3
### run the code

https://user-images.githubusercontent.com/79949101/180878076-502d1e40-0899-48cc-a82e-e8177f8c1b9b.mp4

### part 2
## stepper motor with arduino in tinkercad
## step1 
#### insert Urdino uno 
####  9v battery
####  dc motor with encoder (stepper)
#### Digital pin 11
#### Digital pin 10
#### Digital pin 9
#### Digital pin 8
####  Ground
#### 5V
#### wire green
#### wire black
#### wire Red
#### wire Yellow
#### wire purple
#### wire black
## step 2
### write the code 
```

#include <Stepper.h>
const int stepsPerRevolution = 200;  
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int stepCount = 0;  
void setup() {
}
void loop() {
  int sensorReading = analogRead(A0);
  int motorSpeed = map(sensorReading, 0, 1023, 0, 250);
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }
}
```
## step 3
### run the code
![stepper](https://user-images.githubusercontent.com/79949101/180884192-a3e1d272-ef20-49f3-881b-cf87c3a6f034.jpg)

https://user-images.githubusercontent.com/79949101/180885846-64b6bc0f-8c95-4c28-8f67-ad0b19d5a7a0.mp4



