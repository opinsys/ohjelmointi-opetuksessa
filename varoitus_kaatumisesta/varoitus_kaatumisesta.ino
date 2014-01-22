int asentokytkin = 0;

void setup() 
{
  pinMode(8, INPUT);
}

void loop() 
{
  asentokytkin = digitalRead(8);
  
  delay(100);
  
  if(asentokytkin == 0 ) {
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
