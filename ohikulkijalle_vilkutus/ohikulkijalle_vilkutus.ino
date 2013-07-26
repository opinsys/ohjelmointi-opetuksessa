#include <Servo.h>

Servo tassu;
int valovastuksen_arvo;
int matalin_valovastuksen_arvo = 1023;

void setup()
{
  tassu.attach(6);
  tassu.write(20);

  while (millis() < 4000) {
    valovastuksen_arvo = analogRead(0);
    if (valovastuksen_arvo < matalin_valovastuksen_arvo) {
     matalin_valovastuksen_arvo = valovastuksen_arvo;
    }
  }
  matalin_valovastuksen_arvo = matalin_valovastuksen_arvo - 10;
}

void loop()
{
  valovastuksen_arvo = analogRead(0);

  if (valovastuksen_arvo < matalin_valovastuksen_arvo) {
    tassu.write(180);
    delay(500);

    for(int i = 1; i <= 2; i++) {
      tassu.write(140);
      delay(150);

      tassu.write(180);
      delay(150);
    }

    tassu.write(20);
    delay(1000);
  }

  delay(10);
}
