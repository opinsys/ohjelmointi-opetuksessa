#include <Servo.h> 
 
Servo vasen_tassu;
Servo oikea_tassu;
 
void setup() 
{ 
  vasen_tassu.attach(4);
  oikea_tassu.attach(2);
} 
 
void loop() 
{ 
  vasen_tassu.write(20);
  oikea_tassu.write(20);
  delay(2000);
  vasen_tassu.write(160);
  oikea_tassu.write(140);
  delay(2000);
} 
