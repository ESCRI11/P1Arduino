int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  digitalWrite(led, HIGH);
  waitforit(1000);
  digitalWrite(led, LOW);
  waitforit(1000);
}

int waitforit (int espera) {
  delay(espera);
}
