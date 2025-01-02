// Simulation: https://www.tinkercad.com/things/lqkr8ZX4C6e-exercise-03

void setup() {
  pinMode(7, INPUT); // Button
  pinMode(4, OUTPUT); // Buzzer
}

void loop() {
  int val = digitalRead(7);
  int buzzCount = 3; // Number of buzzes
  if (val == HIGH)
    for (int i = 0; i < buzzCount; i++) {
      digitalWrite(4, HIGH);
      delay(1000); // Wait for 1000 milliseconds (ie 1 second)
      digitalWrite(4, LOW);
      delay(1000); // Wait for 1000 milliseconds (ie 1 second)
    } // End of for loop
}