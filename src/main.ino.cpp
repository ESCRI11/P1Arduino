# 1 "/var/folders/z0/zn0w3_z16k748s0bjj55w3fr0000gn/T/tmpZToN3R"
#include <Arduino.h>
# 1 "/Users/Escriba/Documents/ETSEIAT/Curs Arduino/P1/src/main.ino"
int led = 4;
int lednocurrent = 5;
int inputpin = 6;
int val = 0;
int valorreal = 0;
void setup();
void loop ();
#line 7 "/Users/Escriba/Documents/ETSEIAT/Curs Arduino/P1/src/main.ino"
void setup() {
  pinMode(led, OUTPUT);
  pinMode(inputpin, INPUT);
}

void loop () {
  val = digitalRead(inputpin);
  if (val == HIGH) {
    digitalWrite(lednocurrent, LOW);
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(lednocurrent, HIGH);
  }
}