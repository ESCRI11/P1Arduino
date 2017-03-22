int led = 4;
int inputpin = 6;
int val = 0;
int valorreal = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(inputpin, INPUT);
}

void loop () {
  val = digitalRead(inputpin);
  if (val == HIGH) {
    digitalWrite(led, HIGH);
  }
  else {digitalWrite(led, LOW);}
}
