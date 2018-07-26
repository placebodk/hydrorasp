#ifndef __OUTPUTPIN_H__
#define __OUTPUTPIN_H__

#include "iopin.h"

class OutputPin : IoPin
{
public:
    OutputPin( int pin );

    void SetHigh();
    void SetLow();
};

#endif