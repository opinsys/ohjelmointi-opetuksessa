int kallistus1 = 0;
int kallistus2 = 0;

void setup() 
{
  pinMode(2, INPUT);
  pinMode(4, INPUT);
}

void loop() 
{
  kallistus1 = digitalRead(2);
  kallistus2 = digitalRead(4);
  
  delay(100);
  
  if(kallistus1 == 0 || kallistus2 == 0) {
    tone(12, 1200);
  }
  else {
    noTone(12);    
  }
} 
