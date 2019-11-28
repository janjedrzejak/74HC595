int lPin = 8;
int cPin = 12;
int dPin = 11;
byte data = 0; 

void setup() {
  pinMode(lPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(dPin, OUTPUT);
}
void loop() {
    shiftLED(0);
}
void shiftLED(int p) {
  int pin;
  pin = 1<< p;
  digitalWrite(lPin, LOW);
  shiftOut(dPin, cPin, MSBFIRST, pin);
  digitalWrite(lPin, HIGH);
}
