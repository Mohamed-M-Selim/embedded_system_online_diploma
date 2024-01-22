/*
 * alarm_monitor.h
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"
#include "driver.h"


enum{
	alarm_on,
	alarm_off,
	alarm_period
}alarm_monitor_state_id;

STATE_define(alarm_on);
STATE_define(alarm_off);
STATE_define(alarm_period);

extern void (*alarm_monitor_state)();


#endif /* ALARM_MONITOR_H_ */
