/*
Tämä on yksinkertainen esimerkki Zumo 32u4 robotin moottorien
käytöstä.
Esimerkissä robotti liikkuu eteenpäin kahden sekunnin ajan sen
jälkeen kun on painettu A-painiketta.

Katso myös:
https://github.com/pololu/zumo-32u4-arduino-library/blob/master/examples/MotorTest/MotorTest.ino
*/

#include <Wire.h>
#include <Zumo32U4.h>

// Luodaan objekti, jonka kauttaa voidaan ohjata moottoreita.
Zumo32U4Motors moottorit;
// Luodaan objeckti nappiA.
Zumo32U4ButtonA nappiA;

void setup()
{
  // Odotetaan, kunnes A painiketta on painettu.
  nappiA.waitForButton();

  // Asetetaan vasemman telan moottorille nopeus 100.
  moottorit.setLeftSpeed(100);
  // Asetetaan oikean telan moottorille nopeus 100.4
  moottorit.setRightSpeed(100);

  // Odotetaan kaksi sekuntia (2000 millisekuntia)
  delay(2000);

  // Pysäytetään vasemman telan moottori.
  moottorit.setLeftSpeed(0);
  // Pysäytetään oikean telan moottori.
  moottorit.setRightSpeed(0);
}

void loop()
{

}
