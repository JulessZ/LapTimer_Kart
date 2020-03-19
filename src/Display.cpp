#include <Arduino.h>
#include <Display.h>

class Display{
private:

    int end = 0xff;


public:
    Display(/* args */);
    ~Display();

    void Write_String(String value, String obj){

    }

    void Write_Number(int value, String obj){

    }

    void Write_Config(String value, String obj){
        

    }



};

//Functions

Display::Display(/* args */){
    
    Serial.begin(9600);
    Serial.print("Serial Start!");
}

Display::~Display()
{
}
