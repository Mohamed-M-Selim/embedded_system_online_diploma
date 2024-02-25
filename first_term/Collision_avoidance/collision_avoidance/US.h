/*
 * US.h
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#ifndef US_H_
#define US_H_

#include "state.h"
#include "stdlib.h"

//define states
enum{
	US_busy
}US_state_id;

//declare state functions
void US_init();
int US_get_distance_random(int l, int r, int count);

STATE_define(US_busy);
STATE_define(US_driving);

//STATE pointer to functiong
extern void (*US_state)();




#endif /* US_H_ */
