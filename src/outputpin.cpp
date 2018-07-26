#include "outputpin.h"
#include <pigpio.h>

OutputPin::OutputPin( int pin ) : IoPin( pin )
{
    gpioSetMode(pin, PI_OUTPUT);
}

void OutputPin::SetHigh()
{
    gpioWrite(m_iPin, 1);
}

void OutputPin::SetLow()
{
    gpioWrite(m_iPin, 0);
}
