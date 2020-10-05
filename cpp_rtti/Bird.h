#pragma once
#include "Flyable.h"
class Bird :
    public Flyable
{
public:
    void foraging();
    virtual void takeoff();
    virtual void land();
};

