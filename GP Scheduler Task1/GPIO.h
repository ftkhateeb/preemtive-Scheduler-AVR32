#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

#include <avr/io.h>
#include "ComMacros.h"
#include "StandardTypes.h"
#define LED1 0 // led 1 is at pin 0 in PORTA
#define LED2 1
#define LED3 2

//Prototypes

void GPIO_init(void);
void GPIO_on_led(uint8 );
void GPIO_off_led(uint8);
void GPIO_toggle_led(uint8);
#endif //
