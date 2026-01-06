/* LAB5 Infrared Proximity Sensor */
//https://app.cirkitdesigner.com/project/f8ef8c7b-1df1-42a7-84c0-ff847b73e458

#define sensorPin 8
#define ledPin 13

void setup() {
  pinMode(sensorPin, INPUT);  
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);        
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Object detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No object detected.");
  }

  delay(100);
}
