#include <Servo.h> 
 
Servo tassu;
 
void setup() 
{ 
  tassu.attach(6);
} 
 
void loop() 
{ 
  tassu.write(90);
  delay(2000);
  tassu.write(180);
  delay(2000);
} 
