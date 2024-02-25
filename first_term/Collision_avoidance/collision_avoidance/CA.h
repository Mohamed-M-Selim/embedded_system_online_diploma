/*
 * CA.h
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

//define states
enum{
	CA_waiting,
	CA_driving
}CA_state_id;

//declare state functions

STATE_define(CA_waiting);
STATE_define(CA_driving);

//STATE pointer to functiong
extern void (*CA_state)();



#endif /* CA_H_ */
