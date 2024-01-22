/*
 * main.c
 *
 *  Created on: Jan 21, 2024
 *      Author: selim
 */

#include "Psensor.h"
#include "alarm_monitor.h"
#include "alarm_actuator.h"
#include "main_algo.h"

void setup() {

	//init al drivers
	//init IRQ
	//init HAL US_driver DC_driver
	//init BLOCK
	psensor_init();
	//set States pointers of each block
	psensor_state = STATE(read_pressure);
	algo_state = STATE(high_pressure_detect);
	alarm_monitor_state = STATE(alarm_off);
	// actuator_state = STATE(actuator_off);

}

void main() {

	setup();

	while(1){

		//call state for each block
		psensor_state();
		algo_state();
		alarm_monitor_state();
		// actuator_state();

		//delay
		Delay(1000);
	}

}
