#include <Arduino.h>
#include <Laps.h>




    Laps::Laps(/* args */){
        
        Serial.print("------");
        Serial.print("Laps");
        
        }

    Laps::~Laps(){
    }

    //Public Functions
    
    void Laps::Lap_Interupt(){

        Serial.println("Interupt!!");
        Serial.println("Lap");
        Serial.println(Laps_N);
        Serial.println("--------------");

        if(Mag_Sensor_Interupt==0){

            Serial.println("--------------");
            Serial.println("FirstLap");
            Mag_Sensor_Interupt++;
            LapA[Laps_N].Lap_Start();
            Serial.println("--------------");


        }else if(Mag_Sensor_Interupt < N_Sectors+1){

            Serial.println("--------------");
            Serial.print("Sector: ");
            Serial.println(Mag_Sensor_Interupt);
            Mag_Sensor_Interupt++;
            Serial.println("--------------");

        }else{
            Serial.println("--------------");
            Serial.println("Lap END!");
            
            LapA[Laps_N].Lap_End();
            Laps_N++;
            Mag_Sensor_Interupt = 1;
            LapA[Laps_N].Lap_Start();

            //--------------//
            //To main while after
            int p = Laps_N;
            LapA[p-1].Calc_Lap_Time();
            Serial.println("-------------");
             
        }


    };

    void Laps::Lap_Reset(){

        Laps_N = 0;
        
        
    }

    int Laps::get_Actual_Lap_N(){
        return Laps_N;
    }

    String Laps::get_Session_Time(int Lap_Num){

        return ("a");
    }

    String Laps::get_Session_Times(){

        for(int i = 0; i <= Laps_N; i++){

            Serial.println(LapA[i].get_LAP());

        }

        return ("1");
    }