// Simulation: https://www.tinkercad.com/things/bfQTtmnAgyg-exercise-01

void setup() { // Runs once in the beginning
  pinMode(10, OUTPUT); // Makes pin 10 an output.
}

// the loop function runs over and over again forever
void loop() { // Runs forever
  digitalWrite(10, HIGH); // Turn the LED on (HIGH is the voltage level)
  delay(1000); // Wait for a second
  digitalWrite(10, LOW); // Turn the LED off by making the voltage LOW
  delay(1000); // Wait for a second
}