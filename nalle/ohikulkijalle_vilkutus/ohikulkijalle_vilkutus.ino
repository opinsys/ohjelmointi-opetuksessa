#include <Servo.h>

Servo tassu;
int valovastuksen_arvo;
int matalin_valovastuksen_arvo = 1023;

void setup()
{
  tassu.attach(4);
  tassu.write(20);

  while (millis() < 2000) {
    valovastuksen_arvo = analogRead(0);
    if (valovastuksen_arvo < matalin_valovastuksen_arvo) {
     matalin_valovastuksen_arvo = valovastuksen_arvo;
    }
  }
  matalin_valovastuksen_arvo = matalin_valovastuksen_arvo - 5;

  tone(12, 440, 500);
}

void loop()
{
  valovastuksen_arvo = analogRead(0);

  if (valovastuksen_arvo < matalin_valovastuksen_arvo) {
    tassu.write(160);
    delay(500);

    for(int i = 1; i <= 2; i++) {
      tassu.write(120);
      delay(150);

      tassu.write(160);
      delay(150);
    }

    tassu.write(20);
    delay(1000);
  }

  delay(10);
}
