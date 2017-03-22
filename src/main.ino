int led = 2;
int temps = 1;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  digitalWrite(led, HIGH);
  digitalWrite(led+1, HIGH);
  digitalWrite(led+2, HIGH);
  waitforit(temps);
  digitalWrite(led, LOW);
  digitalWrite(led+1, LOW);
  digitalWrite(led+2, LOW);
  waitforit(temps);
}

int waitforit (int espera) {
  delay(espera);
}
