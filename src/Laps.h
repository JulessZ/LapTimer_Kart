#ifndef Laps_H
#define Laps_H

#include <Arduino.h>
#include <Lap.h>
#include <config_Laps.h>

/*
This class works as the mail holder. Laps save Lap. As a session is formed by several Laps.


*/

class Laps
{
private:
    //Variables
    int Laps_N = 0;
    int Mag_Sensor_Interupt = 0;
    Lap LapA[Max_Laps];
    

public:
    Laps();
    ~Laps();
    //Variables

    //Functions
    void Lap_Interupt(); //
    void Lap_Reset(); //
    void Lap_Stop_Session(); //
    void Lap_Best_Laps(); //
    
    //Gettters
    int get_Actual_Lap_N(); //
    String get_Session_Time(int Lap_Num); //
    String get_Session_Times(); //
    


};

#endif
