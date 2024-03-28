/*
 * GccApplication1.c
 *
 * Created: 3/28/2024 4:50:51 AM
 * Author : selim
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define SET_BIT(ADDRESS, BIT)	ADDRESS |= (1<<BIT)
#define RESET_BIT(ADDRESS, BIT)	ADDRESS &= ~(1<<BIT)
#define TOGGLE_BIT(ADDRESS, BIT)	ADDRESS ^= (1<<BIT)
#define READ_BIT(ADDRESS, BIT)	((ADDRESS & (1<<BIT))>>BIT)



int main(void)
{
	//activate INT0 to detect any change
	SET_BIT(MCUCR,0);
	RESET_BIT(MCUCR,1);
	//activate INT1 to detect rising edge
	SET_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	//detect falling edge on INT2
	RESET_BIT(MCUCSR,6);
	
	//enable external interrupt pin
	//INT0
	SET_BIT(GICR,6);
	//INT1
	SET_BIT(GICR,7);
	//INT2
	SET_BIT(GICR,5);
	
	//set ports to output
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
	
	sei();
    /* Replace with your application code */
    while (1) 
    {
		RESET_BIT(PORTD,5);
		RESET_BIT(PORTD,6);
		RESET_BIT(PORTD,7);
    }
}


ISR(INT0_vect){
	SET_BIT(PORTD,5);
	_delay_ms(1000);
}

ISR(INT1_vect){
	SET_BIT(PORTD,6);
	_delay_ms(1000);
}

ISR(INT2_vect){
	SET_BIT(PORTD,7);
	_delay_ms(1000);
}
