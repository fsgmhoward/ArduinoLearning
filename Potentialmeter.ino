int ledPins[] = {8,9,10,11};
int totalPinNumber = sizeof(ledPins)/sizeof(int);

void setup() {
  // put your setup code here, to run once:
  for (int i=0;i<totalPinNumber;i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int ledLevel = map(analogRead(A0), 0, 1023, 0, totalPinNumber);
  for (int i=0;i<totalPinNumber;i++) {
    if (i<ledLevel) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);   }
  }
}
