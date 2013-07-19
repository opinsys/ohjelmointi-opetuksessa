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
    for (int taajuus=415; taajuus <= 615; taajuus++) {
      tone(12, taajuus);
      delay(5);
    }
    for (int taajuus=615; taajuus > 415; taajuus--) {
      tone(12, taajuus);
      delay(5);
    }
  }
  else {
    noTone(12);    
  }
} 
