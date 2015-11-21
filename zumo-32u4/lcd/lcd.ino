/* 
Tässä esimerkissä näytetään, kuinka käytetään Zumo 32U4
robotin LCD-näyttöä.
Esimerkissä tulostetaan näytölle teksti "Hei maailma"

Katso myös seuraava esimerkki:
https://github.com/pololu/zumo-32u4-arduino-library/blob/master/examples/LCDBasics/LCDBasics.ino
*/

#include <Wire.h>
#include <Zumo32U4.h>

// Luodaan LCD näyttöä varten objekti nimeltään lcd.
// Tämän objektin kautta voidaan hallita robotissa
// olevaa näyttöä. Objekti saa kaikki Zumo32U4LCD-
// luokan ominaisuudet.
Zumo32U4LCD lcd;

void setup()
{
  // Tulostetaan LCD-näytölle teksti "Hei maailma"
  lcd.print("Hei maailma");
}

void loop()
{

}
