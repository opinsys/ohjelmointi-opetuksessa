// Tassujen heilutus
//
// Esimerkkiohjelma tassujen kontrolloimiseen. Tässä esimerkissä heilutetaan tassuja ylös-alas siten, että kussakin
// ääriasennossa odotetaan kahden sekunnin ajan.

#include <Servo.h> // Otetaan Servo-kirjasto käyttöön tassujen ohjaamiseksi
 
Servo vasen_tassu; // Luodaan servo objekti vasemman tassun liikuttamiseksi
Servo oikea_tassu; // Luodaan servo objekti oikean tassun liikuttamiseksi
 
void setup() 
{ 
  vasen_tassu.attach(4); // Liitetään vasen tassu pinniin 4.
  oikea_tassu.attach(2); // Liitetään oikea tassu pinniin 2.
                         // Katson pinnit kytkentäkaaviosta:
                         //   https://raw.githubusercontent.com/opinsys/ohjelmointi-opetuksessa/master/nalle/kytkentakaaviot/nalle_rakennussarja_bb.jpg
} 
 
void loop() 
{ 
  vasen_tassu.write(0);      // Asetetaan vasen tassu asentoon 0 astetta
  oikea_tassu.write(0);      // Asetetaan oikea tassu asentoon 0 astetta
  delay(2000);               // Odotetaan 2000 millisekuntia, eli kaksi sekuntia
  vasen_tassu.write(180);    // Asetetaan vasen tassu asentoon 180 astetta
  oikea_tassu.write(180);    // Asetetaan oikea tassu asentoon 180 astetta
  delay(2000);               // Odotetaan 2000 millisekuntia, eli kaksi sekuntia
} 
