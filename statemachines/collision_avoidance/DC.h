/*
 * DC.h
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#ifndef DC_H_
#define DC_H_

#include "state.h"

//define states
enum{
	DC_idle,
	DC_busy
}DC_state_id;

//declare state functions
void DC_init();
STATE_define(DC_idle);
STATE_define(DC_busy);

//STATE pointer to functiong
extern void (*DC_state)();




#endif /* DC_H_ */
