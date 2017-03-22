int led1 = 5;
int led2 = 6;
int led3 = 9;
int i = 0;
int j = 0;
int k = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop () {
      for (i = 0; i < 255; i++) {
        analogWrite(led1, i);
        delay(5);
      }
      for (i = 255; i > 0; i--) {
        analogWrite(led1, i);
        delay(5);
      }
      for (j = 85; j < 255; j++) {
        analogWrite(led2, j);
        delay(5);
      }
      for (j = 255; j > 0; j--) {
        analogWrite(led2, j);
        delay(5);
      }
      for (k = 170; k < 255; k++) {
        analogWrite(led3, i);
        delay(5);
      }
      for (k = 255; k > 0; k--) {
        analogWrite(led3, i);
        delay(5);
      }
}
