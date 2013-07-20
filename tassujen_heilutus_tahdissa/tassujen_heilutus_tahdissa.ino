#include <Servo.h>

Servo vasen_tassu;
Servo oikea_tassu;

boolean tahti = false;
boolean painikkeen_edellinen_arvo = false;
int vasemman_tassun_asento = 40;
int oikean_tassun_asento = 0;

void setup()
{
  vasen_tassu.attach(6);
  oikea_tassu.attach(9);
  pinMode(11, INPUT);
}

void loop()
{
  if (digitalRead(11) == true) {
    if (painikkeen_edellinen_arvo == false) {
      tahti = true;
    }
    painikken_edellinen_arvo = true;
  }
  else {
   painikkeen_edellinen_arvo = false;
  }

  if(tahti == true) {
    if (vasemman_tassun_asento == 40) {
      vasen_tassu.write(180);
      vasemman_tassun_asento = 180;
    }
    else {
      vasen_tassu.write(40);
      vasemman_tassun_asento = 40;
    }
    if(oikean_tassun_asento == 0) {
      oikea_tassu.write(110);
      oikean_tassun_asento = 110;
    }
    else {
      oikea_tassu.write(0);
      oikean_tassun_asento = 0;
    }
  }

  tahti = false;
  delay(1);
}
