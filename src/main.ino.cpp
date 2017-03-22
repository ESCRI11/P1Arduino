# 1 "/var/folders/z0/zn0w3_z16k748s0bjj55w3fr0000gn/T/tmp8YyQL3"
#include <Arduino.h>
# 1 "/Users/Escriba/Documents/ETSEIAT/Curs Arduino/P1/src/main.ino"
int led = 2;
int temps = 10;
void setup();
void loop ();
int waitforit (int espera);
#line 4 "/Users/Escriba/Documents/ETSEIAT/Curs Arduino/P1/src/main.ino"
void setup() {
  pinMode(led, OUTPUT);
}

void loop () {
  digitalWrite(led, HIGH);
  waitforit(temps);
  digitalWrite(led, LOW);
  waitforit(temps);
  digitalWrite(led+1, HIGH);
  waitforit(temps);
  digitalWrite(led+1, LOW);
  waitforit(temps);
  digitalWrite(led+2, HIGH);
  waitforit(temps);
  digitalWrite(led+2, LOW);
  waitforit(temps);
}

int waitforit (int espera) {
  delay(espera);
}