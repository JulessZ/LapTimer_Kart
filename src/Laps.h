#ifndef Laps_H


class Laps
{
private:
    String Calc_LapTime(long Start_Time, long End_Time);
public:
    Laps(/* args */);
    ~Laps();
    long Start_Time;
    long End_Time;
    long Lap_Time;


    //Functions
    void Start_Time();

};

Laps::Laps(/* args */)
{
}

Laps::~Laps()
{
}







#endif