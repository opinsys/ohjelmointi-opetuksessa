/*
Tässä esimerkissä näytetään Zumo 32u4 robotin etureunassa
olevan läheisyysanturin käyttöä.

Esimerkissä tulostetaan vasemmanpuoleisen läheisyysanturin
arvo robotin LCD-näytölle.

Katso myös:
https://github.com/pololu/zumo-32u4-arduino-library/blob/master/examples/SumoProximitySensors/SumoProximitySensors.ino
*/

#include <Wire.h>
#include <Zumo32U4.h>

// Luodaan LCD näyttöä varten objekti nimeltään lcd.
// Tämän objektin kautta voidaan hallita robotissa
// olevaa näyttöä. Objekti saa kaikki Zumo32U4LCD-
// luokan ominaisuudet.
Zumo32U4LCD lcd;

// Luodaan läheisyysantureita vartein objekti nimeltään
// este_edessa.
Zumo32U4ProximitySensors este_edessa;

void setup()
{
  este_edessa.initThreeSensors();
}

void loop()
{
  // Tyhjennetään LCD-näyttö
  lcd.clear();

  // Luetaan läheisyysantureiden arvot.
  este_edessa.read();

  // Tulostetaan robotin etupuolella olevan anturin
  // tila.
  lcd.print(este_edessa.countsFrontWithLeftLeds());

  // Odotetaan 200 millisekuntia.
  delay(200);
}
