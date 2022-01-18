
#include "mx_11800_vuckale.h"

void turn_on_led(pin_t pin)
{
    writePinHigh(pin);
}

void turn_off_led(pin_t pin)
{
    writePinLow(pin);
}
