#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controller.h"

int main()
{
    std::cout << "Hello World" << std::endl;
    
    Button button1(27); //의미부여
    Led led1(25);
    Controller control(&led1);
    Listener listener(&button1, &control);     // Class: Listener, Instance : listener

    while (1)
    {
        listener.checkEvent();
        delay(50);
    }

    return 0;
}