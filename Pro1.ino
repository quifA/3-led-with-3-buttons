// C++ code
void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(10, HIGH);
    delay(5000);
    digitalWrite(10, LOW);
  }

  if (digitalRead(3) == HIGH) {
    digitalWrite(11, HIGH);
    delay(5000);
    digitalWrite(11, LOW);
  }

  if (digitalRead(4) == HIGH) {
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(12, LOW);
  }
}