#include <Arduino.h>
#include <Laps.h>


void setup() {
  // put your setup code here, to run once:
  

  Serial.begin(38400);

  Serial.print("baud=9600");
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);

  Serial.end();

  Serial.begin(9600);


  pinMode(13, OUTPUT);

  Laps *laps[99];



}

void loop() {
  // put your main code here, to run repeatedly:
  
  int speed = 120;

  while (1==1){
    //speed++;
    Serial.print("SPEED.val=");
    Serial.print(speed);
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);

    if(speed > 190){
      speed=0;
    }
  }

}