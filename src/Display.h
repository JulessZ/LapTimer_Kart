#ifndef Display_H


class Display{
private:
    /* data */
public:
    Display(/* args */);
    ~Display();

    void Wirite_String(String value, String obj);
    void Wirite_Number(int value, String obj);
    void Wirite_Config(String value, String obj);


};

Display::Display(/* args */){
}

Display::~Display(){
}


#endif