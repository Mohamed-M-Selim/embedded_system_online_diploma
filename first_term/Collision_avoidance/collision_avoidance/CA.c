/*
 * CA.c
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */
#include "CA.h"




int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

//STATE pointer to function;
void (*CA_state)();

void US_set_distance(int d){

	CA_distance = d;

	if(CA_distance <= CA_threshold){
		CA_state = STATE(CA_waiting);
	}
	else{
		CA_state = STATE(CA_driving);
	}

	printf("US -----distance=%d---> CA",CA_distance);
}




STATE_define(CA_waiting){

	//state_name
	CA_state_id = CA_waiting ;
	printf("CA_waiting state: distance=%d , speed=%d",CA_distance, CA_speed);

	//state_action
	CA_speed = 0;
	DC_set_speed(CA_speed );

	//CA_motor(CA_speed)

}

STATE_define(CA_driving){

	//state_name
	CA_state_id = CA_driving ;
	printf("CA_driving state: distance=%d , speed=%d",CA_distance, CA_speed);

	//state_action
	CA_speed = 30;
	DC_set_speed(CA_speed );

	//CA_motor(CA_speed)

	//Event_check


}
