int ledPin = 7;
int ledPin1 = 9;
int ledPin2 = 11;

void setup() {
  pinMode(ledPin);
  pinMode(ledPin1);
  pinMode(ledPin2);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}
