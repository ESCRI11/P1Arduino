int led1 = 5;
int led2 = 6;
int led3 = 9;
int i = 0;
int j = 0;
int k = 0;
float alfa = 0;
float pi = 3.14;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop () {
  i = (128 * sin (alfa/100)) + 128;
  j = (128 * sin ((alfa/100) + (2 * pi / 3))) + 128;
  k = (128 * sin ((alfa/100) + (4 * pi / 3))) + 128;
  delay (5);
  analogWrite(led1, i);
  analogWrite(led2, j);
  analogWrite(led3, k);
  alfa ++;
}
