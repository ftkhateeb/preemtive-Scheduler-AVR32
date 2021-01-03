/*
 * Scheduler.h
 *
 * Created: 11/24/2019 7:30:35 PM
 * Authior : Ahmed ElKhateeb
 */ 

#ifndef SCHEDULER_H_INCLUDED
#define SCHEDULER_H_INCLUDED

#include <avr/io.h>
#include <avr/interrupt.h>
#include "Timer.h"
#include "GPIO.h"
#include "StandardTypes.h"
#include "ComMacros.h"



void startscheduler(void);

#endif