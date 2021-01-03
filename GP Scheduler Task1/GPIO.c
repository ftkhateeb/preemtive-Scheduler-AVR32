#include "GPIO.h"


void GPIO_init(void)
{
	//direction of leds as output
	SETBIT(DDRA,LED1);
	SETBIT(DDRA,LED2);
	SETBIT(DDRA,LED3);

	// all leds are initialized to be off
	CLRBIT(PORTA,LED1);
	CLRBIT(PORTA,LED2);
	CLRBIT(PORTA,LED3);

}


void GPIO_on_led(uint8 bitnum)
{
	//function to turn on a certain LED in PORTA
	SETBIT(PORTA,bitnum);
}

void GPIO_off_led(uint8 bitnum)
{
	// function to turn off a certain LED in PORTA
	CLRBIT(PORTA,bitnum);
}

void GPIO_toggle_led(uint8 bitnum)
{
	// function to toggle a certain LED in PORTA
	TOGGLEBIT(PORTA,bitnum);
}

