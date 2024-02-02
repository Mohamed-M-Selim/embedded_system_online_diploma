/*
 * main_algo.c
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#include "alarm_actuator.h"

void (*actuator_state)();

void actuator_init(){

	GPIO_INITIALIZATION();
}
//start alarm
void start_alarm(){

	Set_Alarm_actuator(0);
}

void stop_alarm(){

	Set_Alarm_actuator(1);
}

// STATE_define(actuator_off){
// 	actuator_state_id = actuator_off;

// 	Set_Alarm_actuator(0);
// }

// STATE_define(actuator_on){
// 	actuator_state_id = actuator_on;

// 	Set_Alarm_actuator(1);
// }
