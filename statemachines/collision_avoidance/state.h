/*
 * state.h
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"

//automatic STATE function generated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_

//states connections

void US_set_distance(int d);
void DC_set_speed(int s);



#endif /* STATE_H_ */
