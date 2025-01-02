// Simulation: https://www.tinkercad.com/things/jIRsabW0dew-exercise-06

void setup() {
  pinMode(12, INPUT); // Pin 12 to get PIR signal
  pinMode(2, OUTPUT); // Pin 2 for LED to indicate PIR reading
}

void loop() {
  if (digitalRead(12) == HIGH) { // If motion is detected
    digitalWrite(2, HIGH); // Blink the LED once
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
  }
}