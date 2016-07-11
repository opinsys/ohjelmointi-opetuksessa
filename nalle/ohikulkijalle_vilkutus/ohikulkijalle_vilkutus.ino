// Nalle heilauttaa tassua, kun valon määrä alittaa asetetun kynnyksen.
// Kynnys säädetään ohjelman ensimmäisten sekuntien aikana senhetkisen valaistuksen perusteella.
// Ohikulkijan luoma varjo aiheuttaa valon määrän vähenemisen. 
#include <Servo.h>

Servo tassu; // Luodaan servo-objekti tassun liikuttamiseksi.
int valovastuksen_arvo; // Luodaan muuttuja valovastuksen arvon tallentamiseksi.
int matalin_valovastuksen_arvo = 1023; // Luodaan muuttuja, joka on valaistuksen kynnys tassun heilauttamiseksi ja annetaan sille alkuarvo.

void setup() // Tehdään asetukset servolle ja lasketaan 2 sekunnin aikana valaistuksen kynnys, jos se on oletusarvoa matalampi.
{
  tassu.attach(4); // Liitetään servo-objekti pinniin 4.
  tassu.write(20); // Käännetään servo asentoon 20 astetta.

  while (millis() < 2000) { // Niin kauan kuin aika ohjelman aloittamisesta on pienempi kuin 2000 millisekuntia,
    valovastuksen_arvo = analogRead(0); // tallennetaan valovastuksen muuttujan arvo yhtä suureksi kuin analogisen pinnin 0 arvo tällä hetkellä, ja
    if (valovastuksen_arvo < matalin_valovastuksen_arvo) { // jos valovastuksen muuttujan arvo on pienempi kuin kynnyksen muuttujan arvo,
     matalin_valovastuksen_arvo = valovastuksen_arvo; // kynnyksen muuttujan arvo lasketaan yhtä suureksi kuin valovastuksen muuttujan arvo.
    }
  } // Palataan while-silmukan alkuun, jos sen ehto on totta.
  matalin_valovastuksen_arvo = matalin_valovastuksen_arvo - 5; // Lasketaan kynnyksen muuttujan arvoa viidellä reagointiherkkyyden vähentämiseksi.

  tone(12, 440, 500); // Soita pinnissä 12 taajuudella 440 Hz (yksiviivainen a) 500 millisekuntia.
}

void loop() // Toista ikuisesti:
{
  valovastuksen_arvo = analogRead(0); // Tallennetaan valovastuksen muuttujan arvo yhtä suureksi kuin analogisen pinnin 0 arvo tällä hetkellä.

  if (valovastuksen_arvo < matalin_valovastuksen_arvo) { // Jos valovastuksen muuttuja on pienempi kuin kynnyksen muuttuja,
    tassu.write(160); // käännä tassu asentoon 160 astetta ja
    delay(500); // odota 500 millisekuntia.

    for(int i = 1; i <= 2; i++) { // Suorita kunnes muuttujan i, jonka alkuarvo on 1, on pienempi tai yhtäsuuri kuin 2 ja loopin lopuksi nosta i:n arvoa yhdellä.
      tassu.write(120); // Käännä tassu asentoon 120 astetta ja 
      delay(150); // odota 150 millisekuntia.

      tassu.write(160); // Käännä tassu asentoon 160 astetta ja 
      delay(150); // odota 150 millisekuntia.
    } // Nostetaan i:n arvoa yhdellä ja palataan for-silmukan alkuun.

    tassu.write(20); // Käännä tassu asentoon 20 astetta ja 
    delay(1000); // odota 1000 millisekuntia.
  }

  delay(10); // Odota 10 millisekuntia. Tämä on viive valovastuksen arvon lukemiselle. Muuten arvoa yritettäisiin lukea äärettömän nopeasti.
} // Palataan loop-silmukan alkuun.
