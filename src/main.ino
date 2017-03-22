int led = 2;
int temps = 100;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  digitalWrite(led, HIGH);
  waitforit(temps);
  digitalWrite(led, LOW);
  digitalWrite(led+1, HIGH);
  waitforit(temps);
  digitalWrite(led+1, LOW);
  digitalWrite(led+2, HIGH);
  waitforit(temps);
  digitalWrite(led+2, LOW);
}

int waitforit (int espera) {
  delay(espera);
}
