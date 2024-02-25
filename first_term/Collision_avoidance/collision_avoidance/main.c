/*
 * main.c
 *
 *  Created on: Jan 16, 2024
 *      Author: selim
 */

#include "CA.h"
#include "US.h"
#include "DC.h"


void setup(){

	//init al drivers
	//init IRQ
	//init HAL US_driver DC_driver
	//init BLOCK
	DC_init();
	US_init();
	//set States pointers of each block
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}


void main()
{
	volatile int d;

	setup();

	while(1){

		//call state for each block
		US_state();
		CA_state();
		DC_state();

		//delay
		for(d = 0 ; d <= 1000 ; d++);
	}
}
