#include <Arduino.h>
#include <Laps.h>

class Laps{
private:
    /* data */
public:
    Laps(/* args */);
    ~Laps();

    long Start_Time = 0;

    void Start_Time(){
        Start_Time = millis();
    }
};

Laps::Laps(/* args */){
}

Laps::~Laps(){
}

