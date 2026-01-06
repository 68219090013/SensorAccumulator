/*LAB 5.2 IR LCD */
//https://app.cirkitdesigner.com/project/c0b59cc2-d57c-45c2-9fa6-8a80ab0f506a

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define sensorPin 8
#define ledPin 13

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  pinMode(sensorPin, INPUT);  
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);     
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Thanapat/Suphadet");
   
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Object detected!");
    lcd.setCursor(0, 1); 
    lcd.print("Object detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No object detected.");
    lcd.setCursor(0, 1);
    lcd.print("No object detected.");
  }

  delay(100);
}
