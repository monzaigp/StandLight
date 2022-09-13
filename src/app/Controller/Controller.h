#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#pragma once

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;

public:
    Controller(Led *led);
    virtual ~Controller();
    void updateEvent(std::string strBtn);
};

#endif /* __CONTROLLER_H__ */