int led = 2;
int temps = 8;

void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  digitalWrite(led, HIGH); //blue
  waitforit(0);
  digitalWrite(led, LOW);
  digitalWrite(led+1, HIGH); //green
  waitforit(2);
  digitalWrite(led+1, LOW);
  digitalWrite(led+2, HIGH); //red
  waitforit(5);
  digitalWrite(led+2, LOW);
}

int waitforit (int espera) {
  delay(espera);
}
