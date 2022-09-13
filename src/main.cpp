#include <iostream>
#include "Button.h"
#include "Led.h"
#include <wiringPi.h>
#include "Listener.h"

int main()
{
    std::cout << "Hello World" << std::endl;
    
    Button button1(27); //의미부여
    Led led1(25);
    Listener listener(&button1, &led1);     // Class: Listener, Instance : listener

    while (1)
    {
        listener.checkEvent();
        delay(50);
    }

    return 0;
}