#include <Arduino.h>
#include <Lap.h>
using namespace std;


Lap::Lap(/* args */)
{
}

Lap::~Lap()
{
}

void Lap::Lap_Start(){
    
    TimeStamp_Start = millis();
    /*Serial.println("Start");
    Serial.println(TimeStamp_Start);*/

}
void Lap::Lap_End(){
    
    TimeStamp_End = millis();
    /*Serial.print("END");
    Serial.println(TimeStamp_End);*/

}

String Lap::get_LAP(){

    return (LapTime);

}

String Lap::Calc_Lap_Time(){

    long Time_Total = TimeStamp_End - TimeStamp_Start;
    //Debug
    /*Serial.println("Times");
    Serial.print(TimeStamp_Start);
    Serial.println(TimeStamp_End);
    Serial.println(Time_Total);
    Serial.println("Times");*/
    
    int min = 0;
    int sec = 0;
    
    //Convert from millis to sec
    int seconds = Time_Total / 1000;
    seconds = seconds % 3600;

    //Get min
    min = seconds / 60;

    //Get Sec
    sec = seconds % 60;

    //Get Millis
    int millis = Time_Total % 1000;  
    
    //Print Time in serial
    Serial.println("Lap Time");
    LapTime = String(min) + ":" + String(sec) + "." + String(millis) ;
    Serial.println(LapTime);
    
     
    return (LapTime);
}


String Lap::get_Running_Lap(){

    return ("s");
}