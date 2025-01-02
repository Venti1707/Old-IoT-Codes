#include <Keypad.h>

const byte numOfRows = 4;
const byte numOfColumns = 4;

// How the keypad is labelled
char keymap[numOfRows][numOfColumns] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// The pins connected to the keypad's row and column
byte rowPins[numOfRows] = {9, 8, 7, 6};
byte colPins[numOfColumns] = {5, 4, 3, 2};

// Initialise an instance of the keypad class
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numOfRows, numOfColumns);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char keypressed = myKeypad.getKey();
  if (keypressed != NO_KEY) {
    Serial.println(keypressed);
  }
  delay(100);
}