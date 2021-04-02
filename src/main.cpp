#include <Arduino.h>
#include <Laps.h>
#include <config_Main.h>


//Laps Object Storing 10 lap
Laps lapA;
void LapStart();

void setup() {
  //Starting Serial
  Serial.begin(9600);

  
  //pinMode(4, INPUT);
  //pinMode(9, OUTPUT);
  //digitalWrite(9, HIGH);

  
  //Temp Sensor
  //pinMode(A0, INPUT);
  
  //Interuption detection inicial
  pinMode(Lap_Sensor, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(Lap_Sensor), LapStart, FALLING);


}

void loop() {
  // put your main code here, to run repeatedly:
  
  //int speed = 120;
  // double p = analogRead(A0);
  //Serial.println(p);
  // p = (p * 0.0048) / 0.01;
  // Serial.println(p);
  // delay(2000);

  if(lapA.get_Actual_Lap_N() == 5){
      lapA.get_Session_Times();
  }

  while (1==0){
    
    Serial.print("SPEED.val=");
    //Serial.print(speed);
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);

    
  }

}


void LapStart(){

  //lapA.Lap_Reset();  
  lapA.Lap_Interupt();

}