#include <Servo.h> 
 
Servo tassu;
 
void setup() 
{ 
  tassu.attach(6);
} 
 
void loop() 
{ 
  tassu.write(0);
  delay(2000);
  tassu.write(45);
  delay(2000);
} 
