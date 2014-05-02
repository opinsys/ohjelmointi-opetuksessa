#include <Servo.h> 
 
Servo tassu1;
Servo tassu2;

boolean runOnce = true;
 
void setup() 
{ 
  tassu1.attach(4);
  tassu2.attach(2);
  
  tassu1.write(0);
  tassu2.write(180);
}


void loop()
{
  if(runOnce) {
    



















































    runOnce = false;
  }
}

