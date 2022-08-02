#include "mbed.h"

int main()
{
    // Initialise the digital pins D2 and D3 as outputs
    DigitalOut blue(D2);
    DigitalOut red(D3);

    // Initialise the digital pin BUTTON1 (the blue button) as an input
    DigitalIn button(BUTTON1);
    
    // Loop forever...
    while (true) {
        
        // Flash the blue LED: on for 100ms, off for 300ms
        // Your code modifications should be made here
        blue = true;
        thread_sleep_for(100);
        blue = false;
        thread_sleep_for(300);
        
    }
}
