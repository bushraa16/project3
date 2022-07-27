# part1
## servo motor......
### the project explan how to connect servo motor with arduno uno use tinkercad and In reality
## step1 use tinkercad
#### insert Urdino uno 
####  insert servo motor
#### insert resistor
 #### insert potentiometer
 #### insert breadboard small
####  botao 3
####  Connecting wires
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
 #### insert breadboard small
####  labtop
####  insert servo motor
####   wire connecting arduino to laptop
####  Connecting wires


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
 #### insert breadboard small
####  Connecting wires
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

https://user-images.githubusercontent.com/79949101/180886354-e78f9f82-f79d-477a-977c-f93b3f8dabe7.mp4
### part 3
## brushless motor with arduino in tinkercad
## step1 
#### insert Urdino uno 
 #### insert breadboard small
####  9v battery
####  dc motor (brushless motor)
####  Connecting wires
## step 2
### write the code 
```
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
```
## step 3
### run the code
![brushless motor](https://user-images.githubusercontent.com/79949101/180888199-85f5e772-3cee-4d13-886d-84f9971d429b.jpg)

https://user-images.githubusercontent.com/79949101/180888988-03935aa9-fce8-4423-83ac-066cb67f028c.mp4

## brushless motor in reality


![msg791111762-11318 (1)](https://user-images.githubusercontent.com/79949101/181353423-ca2bec6e-b4ab-42e5-86d6-160120f0feca.jpg)


https://user-images.githubusercontent.com/79949101/181353448-50e74325-7944-428b-ad28-4c26dd0b311f.MP4



