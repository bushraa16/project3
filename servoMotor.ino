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
