// Simulation: https://www.tinkercad.com/things/kqdpUBUJwBo-exercise-05

void setup() {
  pinMode(9, OUTPUT);
  /*
    Will produce a rectangular waveform at Pin 9
    To control Servo Arm position
    Rectangular waveform period should be 20ms
    High time of 0.6ms gives the first position
    High time of 2.4ms gives the second position
  */
}

void loop() {
  // Move arm to 1st position
  for (int i = 0; i < 30; i++) { // A number of pulses are needed for arm to move to desired position
    digitalWrite(9, HIGH); // High of 0.6ms
    delayMicroseconds(600);
    digitalWrite(9, LOW); // Low of 19.4ms
    delayMicroseconds(400);
    delay(19);
  }
  delay(1);

  // Move arm to 2nd position
  for (int i = 0; i < 30; i++) {
	  digitalWrite(9, HIGH); // High of 2.4ms
      delay(2);
      digitalWrite(9, LOW); // Low of 19.4ms
      delayMicroseconds(600);
      delay(17);
  }
  delay(1);
}