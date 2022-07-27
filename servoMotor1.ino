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
