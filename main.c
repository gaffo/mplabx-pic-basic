#include "config.h"

void main()
{
    // Declare a on/off for the light

    unsigned char fOn = 0;

    // Set pin 0 on Port A to output (0) and the rest to not output

    TRISA = 0b11111110;
    // TRISAbits.TRISA0 = 0;

    // Forever

    while (1)
    {
        // Flop our toggle

        fOn = !fOn;

        PORTA = fOn;
    }
}