/*
 * Timer.h
 * Created: 11/24/2019 7:45:10 PM
 * Author : Ahmed ElKhateeb
 */ 
#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED


#include "StandardTypes.h"
#include "ComMacros.h"
#include "GPIO.h"
#include <avr/interrupt.h>
#define F_CPU 1000000

// Definitions for certain Pins in the AVR's Timer-registers to enhance code readability

#define WGM01 3
#define WGM00 6
#define CS00 0
#define CS01 1
#define CS02 2
#define TOIE0 0
#define FOC0 7

//definitions for time required for each task to be repeated

#define NUMBER_OF_OVERFLOWS_PER_SECOND 4 // time needed to toggle led1
#define NUMBER_OF_OVERFLOWS_PER_TWO_AND_HALF_SECOND 10 //time needed to toggle led2
#define NUMBER_OF_OVERFLOWS_PER_FOUR_SECONDS 16 //time needed to togle led3

//Prototypes
void TIMER0_init(void);

#endif