/*
 * DC.c
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#include "DC.h"

int DC_speed = 0;

//STATE pointer to function;
void (*DC_state)();

void DC_init() {

	//init PWM
	printf("DC_init \n");
}

void DC_set_speed(int s){

	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf("CA -----speed=%d-----> DC",DC_speed);

}



STATE_define(DC_idle) {

	//state_name
	DC_state_id = DC_idle;
	printf("DC_idle state: speed=%d \n",DC_speed);

	//state_action-->call PWM
	//give same speed as it was

}

STATE_define(DC_busy) {

	//state_name
	DC_state_id = DC_busy;
	printf("DC_busy state: speed=%d \n",DC_speed);

	//state_action---->call PWM
	//change speed based on signal

	DC_state = STATE(DC_idle);

}
