#ifndef Lap_H
#define Lap_H

#include <Arduino.h>
using namespace std;

class Lap
{
private:
    
    long TimeStamp_Start = 0;
    long TimeStamp_End = 0;
    String LapTime = "0:0.0";


public:
    Lap(/* args */);
    ~Lap();

    void Lap_Start();
    void Lap_End();
    String Calc_Lap_Time();
    String get_LAP();
    String get_Running_Lap();

};

#endif
