
int ledit[] = { 1, 3, 4, 5, 6, 8, 10, 12, A0, A1, A3, A5 };

int ledIndeksi = 0;

void setup() {

  for (int i = 0; i < 12; i = i+1) {
    pinMode(ledit[i], OUTPUT);
  }

}

void loop() {
  
  int led = ledit[random(0,12)];

  digitalWrite(led, HIGH);

  delay(500);

  digitalWrite(led, LOW);

}
