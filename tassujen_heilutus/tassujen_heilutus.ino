#include <Servo.h> 
 
Servo vasen_tassu;
Servo oikea_tassu;
 
void setup() 
{ 
  vasen_tassu.attach(6);
  oikea_tassu.attach(9);
} 
 
void loop() 
{ 
  vasen_tassu.write(90);
  oikea_tassu.write(0);
  delay(2000);
  vasen_tassu.write(180);
  oikea_tassu.write(90);
  delay(2000);
} 
