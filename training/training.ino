#include <Servo.h> 
 
Servo hand1;
Servo hand2;

boolean runOnce = true;
 
void setup() 
{ 
  hand1.attach(4);
  hand2.attach(2);
  
  hand1.write(0);
  hand2.write(180);
}


void loop()
{
  if(runOnce) {
    






















    
    



























    runOnce = false;
  }
}

