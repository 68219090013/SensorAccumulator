/* LAB4.1 4X4 */
// 

#include <Keypad.h>


const byte ROWS = 4; // Number of rows
const byte COLS = 4; // Number of columns

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {12, 11, 10, 9};   // Connect to R1, R2, R3, R4
byte colPins[COLS] = {7, 6, 5, 4};   // Connect to C1, C2, C3, C4

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("4x4 Keypad Test");

}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();
  if (key) { 
    Serial.print("Key Pressed: ");
    Serial.println(key); 
  }

}
