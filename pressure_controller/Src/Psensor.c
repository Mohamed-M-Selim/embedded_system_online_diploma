/*
 * main_algo.c
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */
#include "Psensor.h"

int psensor_pressure = 0;

//STATE pointer to function;
void (*psensor_state)();

void psensor_init(){

	GPIO_INITIALIZATION ();
}

STATE_define(read_pressure)
{
	//state_name
	psenor_state_id = read_pressure;

	//state_action--->get random pressure
	psensor_pressure = getPressureVal();

	//send pressureVAL to main algo
	psensor_set_pressure(psensor_pressure);
}

