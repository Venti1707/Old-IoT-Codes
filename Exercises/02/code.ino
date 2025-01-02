// Simulation: https://www.tinkercad.com/things/6SpUGZGzHiB-exercise-02

void setup() {
  // LED pins are outputs
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int val = analogRead(A3); // Read "brightness"
  if (val > 700) { // "High" brightness
    // Turn off both LEDs
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  } else if (val > 300) { // "Medium" brightness
    digitalWrite(13, HIGH); // Turn on one LED
    digitalWrite(12, LOW); // And off the other
  } else { // "Low" brightness
    // Turn on both LEDs
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }
  delay(100); // Wait for 100 milliseconds (ie 0.1 second)
}