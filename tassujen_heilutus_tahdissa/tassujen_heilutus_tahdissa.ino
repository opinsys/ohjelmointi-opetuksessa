#include <Servo.h>

Servo vasen_tassu;
Servo oikea_tassu;

boolean tahti = false;
boolean painikkeen_edellinen_arvo = false;
int vasen_tassu_alhaalla = 40;
int vasen_tassu_ylhaalla = 180;
int oikea_tassu_alhaalla = 110;
int oikea_tassu_ylhaalla = 0;
int vasemman_tassun_asento = vasen_tassu_alhaalla;
int oikean_tassun_asento = oikea_tassu_ylhaalla;

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
    painikkeen_edellinen_arvo = true;
  }
  else {
   painikkeen_edellinen_arvo = false;
  }

  if (tahti == true) {
    if (vasemman_tassun_asento == vasen_tassu_alhaalla) {
      vasen_tassu.write(vasen_tassu_ylhaalla);
      vasemman_tassun_asento = vasen_tassu_ylhaalla;
    }
    else {
      vasen_tassu.write(vasen_tassu_alhaalla);
      vasemman_tassun_asento = vasen_tassu_alhaalla;
    }
    if (oikean_tassun_asento == oikea_tassu_ylhaalla) {
      oikea_tassu.write(oikea_tassu_alhaalla);
      oikean_tassun_asento = oikea_tassu_alhaalla;
    }
    else {
      oikea_tassu.write(oikea_tassu_ylhaalla);
      oikean_tassun_asento = oikea_tassu_ylhaalla;
    }
  }

  tahti = false;
  delay(1);
}
