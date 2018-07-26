#include "iopin.h"
#include "globals.h"
#include <pigpio.h>

IoPin::IoPin( int pin )
{
    m_iPin = pin;
}
