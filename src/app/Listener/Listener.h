#ifndef LISTENER_H
#define LISTENER_H

#pragma once

#include "Button.h"
#include "Led.h"

class Listener
{
public:
    Listener(Button *button, Led *led);
    ~Listener();
    void checkEvent();

private:
    Button *powerButton;
    Led *light;

};

#endif