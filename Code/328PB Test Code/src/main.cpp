#include <Arduino.h>

void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  delay(500);
  Serial.println("Starting...");
}

void loop() {
  digitalWrite(8, HIGH);
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(8, LOW);
  Serial.println("LED OFF");
  delay(1000);
}