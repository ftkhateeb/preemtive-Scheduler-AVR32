/*
 * SCHEDULER
 * Created: 11/24/2019 
 * Author : Ahmed ElKhateeb
 * A Sheduler Application to loop on 3 Tasks
 * activating each periodically according to a predefined time periods
 */

#include "scheduler.h"
#define F_CPU 1000000


int main(void)
{
	SETBIT(SREG,I ); //enable Interrupts Globally 
	GPIO_init(); 
	TIMER0_init();
	startscheduler();
	
	return 0 ;
}