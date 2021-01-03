#include "Scheduler.h"

extern uint8 Led1Counter;
extern uint8 Led2Counter;
extern uint8 Led3Counter;

void startscheduler(void)
{
	while (1)
	
	{
		if (NUMBER_OF_OVERFLOWS_PER_SECOND == Led1Counter) // Task 1 is repeated every 1 second ( 4 Timer over flow cycles)
		{
			GPIO_toggle_led(LED1); //our 1st task
			Led1Counter =0;
		}
		
		if (NUMBER_OF_OVERFLOWS_PER_TWO_AND_HALF_SECOND == Led2Counter) // Task 2 is repeated every 2.5 seconds (10 Timer overflow cycles)
		{
			GPIO_toggle_led(LED2);//2nd task
			Led2Counter =0;
		}
		
		if (NUMBER_OF_OVERFLOWS_PER_FOUR_SECONDS == Led3Counter) // Task 3 is repeated every 4 Second
		{
			GPIO_toggle_led(LED3);//3rd task
			Led3Counter =0;
		}
		
	}
}


