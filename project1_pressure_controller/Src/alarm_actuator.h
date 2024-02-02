/*
 * alarm_actuator.h
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_

#include "state.h"
#include "driver.h"

enum{
	actuator_off,
	actuator_on
}actuator_state_id;


void actuator_init();

// STATE_define(actuator_off);
// STATE_define(actuator_on);


extern void (*actuator_state)();


#endif /* ALARM_ACTUATOR_H_ */
