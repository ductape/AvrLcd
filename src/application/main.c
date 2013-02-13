/**
 * main.c
 *
 *  Created on: Feb 11, 2013
 *      Author: ductape
 */

#include <avr/io.h>

int main(void)
{
    volatile uint16_t delay;

    DDRD |= (1<<2);

    while(1)
    {
        PORTD ^= (1<<PIN2);

        for (delay = 10000; delay > 0; --delay)
        {
            __asm__ volatile("nop");
        }
    }

    return (1);
}


