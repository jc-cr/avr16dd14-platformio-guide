#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN 7
int main(void)
{
    PORTD.DIRSET = (1 << LED_PIN);
    while (1)
    {
        PORTD.OUTSET = (1 << LED_PIN);
        _delay_ms(500);

        PORTD.OUTCLR = (1 << LED_PIN);
        _delay_ms(500);
    }
}