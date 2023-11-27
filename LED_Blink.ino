int ledPin = 7;
int ledPin1 = 9;

void setup() {
  pinMode(ledPin);
  pinMode(ledPin1);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin1, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, LOW);
}
