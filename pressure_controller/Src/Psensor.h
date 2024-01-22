/*
 * Psensor.h
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#ifndef PSENSOR_H_
#define PSENSOR_H_

#include "state.h"
#include "driver.h"

//define states
enum{
	read_pressure,
}psenor_state_id;

//declare state functions;
void psensor_init();

STATE_define(read_pressure);

//STATE POINTER TO FUNCTION
extern void (*psensor_state)();

#endif /* PSENSOR_H_ */
