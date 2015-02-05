// Varoitus kaatumisesta
//
// Tässä esimerkissä esitellään asentokytkimen ja piezo-kaiuttimen käyttöä.
// Kun nalle kaadetaan, kaiuttimesta soitetaan hälytysajoneuvoa muistuttava ääni.
//

int asentokytkin = 0;  // Muuttuja asentokytkimen tilan tallentamiseen

void setup() 
{
  pinMode(8, INPUT);  // Asetetan pinni INPUT tilaan
}

void loop() 
{
  asentokytkin = digitalRead(8); // Luetaan asentokytkimen tila
  
  delay(100);                    // Odotetaan 100 millisekuntia
  
  if(asentokytkin == 0 ) {       // Mikäli asentokytkimen tila on 0 käynnistetään sireeni
    // Seuraava toistolause käy läpi numerot 415:sta 614:sta yksi kerrallaan.
    for (int taajuus=415; taajuus <= 615; taajuus++) {
      tone(12, taajuus); // Soitetaan ääni, jonka 'taajuus' muuttuja sisältää
      delay(5);          // Odotetaan 5 millisekuntia
    }
    for (int taajuus=615; taajuus > 415; taajuus--) {
      tone(12, taajuus); // Soitetaan ääni, jonka 'taajuus' muuttuja sisältää
      delay(5);          // Odotetaan 5 millisekuntia
    }
  }
  else {
    noTone(12); // Sammutetaan kaiutin
  }
} 
