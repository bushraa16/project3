# part1
## servo motor......
### the project explan how to connect servo motor with arduno uno use tinkercad and In reality
## step1
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




https://user-images.githubusercontent.com/79949101/180875416-934ac239-5be4-49bc-9c3c-60921c09fdb8.mp4




https://user-images.githubusercontent.com/79949101/180875377-9affc0cb-1f6e-42c3-a3ee-d667cf3c1d0a.mp4


