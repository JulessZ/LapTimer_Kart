#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  String d = "hola";

  Serial.print(d);

  digitalWrite(13, HIGH);

}