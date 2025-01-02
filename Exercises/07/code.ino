void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  /*
    Fixed 1000 resistor & LDR forms voltage divider
    If it is bright, LDR resistance decreases, so A0 gets higher voltage
    If it is dim, LDR resistance increases, so A0 gets lower voltage
  */
  Serial.println(value);
  if (value < 500) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  delay(100);
}