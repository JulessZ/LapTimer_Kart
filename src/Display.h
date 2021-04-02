#ifndef Display_H
#define Display_H


class Display{
private:
    int end = 0xff;
public:
    Display(/* args */);
    ~Display();

    void Wirite_String(String value, String obj);
    void Wirite_Number(int value, String obj);
    void Wirite_Config(String value, String obj);


};

#endif