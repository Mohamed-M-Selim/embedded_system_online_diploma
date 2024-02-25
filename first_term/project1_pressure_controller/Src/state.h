/*
 * state.h
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"

//automatic STATE function generated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_

//states connections
void psensor_set_pressure(int p);
void high_pressure_detected();
void start_alarm();
void stop_alarm();



#endif /* STATE_H_ */
