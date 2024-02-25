/*
 * US.c
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#include "US.h"

int US_distance = 0;

//STATE pointer to function;
void (*US_state)();

void US_init(){
	//init US Driver
	printf("US_init \n");

}

STATE_define(US_busy){

	//state_name
	US_state_id = US_busy ;

	//state_action-->get_random_distance
	US_distance = US_get_distance_random(45,55,1);
	printf("US_busy state: distance=%d",US_distance);

	US_set_distance(US_distance);
	US_state = STATE(US_busy);


}

int US_get_distance_random(int l, int r, int count){

	//generate random number from l to r
	int i,rand_num;
	for(i=0; i<1 ; i++){
		rand_num = (rand() % (r - 1 + 1 )) + 1;
		return rand_num;
	}
}

