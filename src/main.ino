int led = 13;
int temps = 100;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  digitalWrite(led, HIGH);
  waitforit(temps);
  digitalWrite(led, LOW);
  waitforit(temps);
}

int waitforit (int espera) {
  delay(espera);
}
