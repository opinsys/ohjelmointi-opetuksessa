#include <Servo.h> 
 
Servo tassu;
 
void setup() 
{ 
  tassu.attach(4);
} 
 
void loop() 
{ 
  tassu.write(0);
  delay(2000);
  tassu.write(150);
  delay(2000);
} 
