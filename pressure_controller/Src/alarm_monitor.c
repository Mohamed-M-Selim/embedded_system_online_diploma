/*
 * main_algo.c
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#include "alarm_monitor.h"

void (*alarm_monitor_state)();


void high_pressure_detected(){

	alarm_monitor_state = STATE(alarm_on);
}

STATE_define(alarm_on){

	alarm_monitor_state_id = alarm_on;

	start_alarm();
	Delay(60000);
	stop_alarm();
	alarm_monitor_state = STATE(alarm_off);
}
STATE_define(alarm_off){

	alarm_monitor_state_id = alarm_off;

	stop_alarm();

}
STATE_define(alarm_period){

	alarm_monitor_state_id = alarm_period;

	Delay(60000);

	alarm_monitor_state = STATE(alarm_off);
}
