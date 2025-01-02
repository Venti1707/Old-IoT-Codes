// Simulation: https://www.tinkercad.com/things/h2RUF25yCUI-exercise-09

/*
  https://learn.adafruit.com/tmp36-temperature-sensor
  Refer to the above link to learn about TMP36
  and for the formula used to convert the voltage
  to temperature
*/

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned int value = analogRead(A0);
  Serial.println(value);

  float voltage = value * 5000.0 / 1023.0; // Converts A0's reading to mV
  Serial.println(voltage);

  if (voltage > 500) { // Only measures from 0°C and higher
    unsigned int temperature = (voltage - 500.0) / 10.0;
    Serial.println(temperature);
    
    if (temperature > 35) {
      digitalWrite(2, HIGH);
      delay(100);
      digitalWrite(2, LOW);
      delay(100);
    }
  } else {
    Serial.println("Below freezing");
  }
  Serial.println("------");
  Serial.println(2000);
}