/*
 * main_algo.c
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#include "main_algo.h"

int pressure = 0;
int threshold = 20;

void (*algo_state)();


void psensor_set_pressure(int p){

	pressure = p;
	algo_state = STATE(high_pressure_detect);
}

STATE_define(high_pressure_detect){

	algo_state_id = high_pressure_detect;

	if(pressure >= threshold){

		//send signal to monitor
		high_pressure_detected();

		algo_state = STATE(high_pressure_detect);
	}else{
		algo_state = STATE(high_pressure_detect);
	}

}
