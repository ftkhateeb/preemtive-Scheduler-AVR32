#include "Timer.h"

// Counters that will be used for the tasks so the scheduler keep track of when to activate each Task
uint8 Led1Counter =0;
uint8 Led2Counter =0;
uint8 Led3Counter =0;

ISR(TIMER0_OVF_vect)
{
// counters are incremented every quarter second when overflow interrupt is serviced
//(prescaler was set to make timer overflow every 1\4 sec)

Led1Counter++; 
Led2Counter++;
Led3Counter++;
}

void TIMER0_init(void)
{
 //timer initial value
 TCNT0 = 0;
 //enable overflow interrupt
 SETBIT(TIMSK,TOIE0);

 /* configure the timer
 * 1. Non PWM mode FOC0=1
 * 2. PreScaler= F_CPU/1024 CS00=1 CS01=0 CS02=1 ( this was calculated so Timer overflows every 1/4 second)
 */
 SETBIT(TCCR0,FOC0);
 SETBIT(TCCR0,CS02);
 SETBIT(TCCR0,CS00);
}
