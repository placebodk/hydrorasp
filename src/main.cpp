#include <iostream>
#include "outputpin.h"
#include <pigpio.h>

using namespace std;

int main()
{
    if( gpioInitialise() < 0 )
    {
        return -1;
    }

    OutputPin* pin = new OutputPin( 4 );

    for( int i=0; i<10; ++i )
    {
        pin->SetHigh();
        gpioDelay(1000000);
        pin->SetLow();
        gpioDelay(1000000);
    }

    gpioTerminate();

    return 0;
}