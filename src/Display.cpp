#include <Arduino.h>
#include <Display.h>


    Display::Display(/* args */){
    
    Serial.begin(9600);
    Serial.print("Serial Start!");
    }

    Display::~Display(){
    }



    void Display::Wirite_String(String value, String obj){

    }

    void Display::Wirite_Number(int value, String obj){

    }

    void Display::Wirite_Config(String value, String obj){
        

    }
