#include "mbed.h"

int main()
{
    // Initialise the digital pins D2 and D3 as outputs
    DigitalOut green(D2);
    DigitalOut red(D3);

    // Initialise the digital pins D4 and D5 as inputs with pullup resistors
    DigitalIn PB1(D4, PullUp);
    DigitalIn PB2(D5, PullUp);
    
    // Loop forever...
    while (true) {
        // Is PB1 being pressed?
        if (PB1 == false) {
            // Light the red LED, extinguish the green
            red = true;
            green = false;
        }
    }

}
