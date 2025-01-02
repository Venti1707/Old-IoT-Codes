int buttonState = 0;
int counter;

void setup() {
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(12, LOW);

    for (counter = 0; counter < 5; ++counter) {
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(1, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(1, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(1, LOW);
    }
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(1, LOW);
  }
}