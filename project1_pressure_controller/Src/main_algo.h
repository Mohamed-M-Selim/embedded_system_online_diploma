/*
 * main_algo.h
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#ifndef MAIN_ALGO_H_
#define MAIN_ALGO_H_

#include "state.h"
#include "driver.h"

enum{
	high_pressure_detect,
}algo_state_id;

STATE_define(high_pressure_detect);

extern void (*algo_state)();



#endif /* MAIN_ALGO_H_ */
