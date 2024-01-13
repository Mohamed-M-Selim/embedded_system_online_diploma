/*
 * main.c
 *
 *  Created on: Jan 11, 2024
 *      Author: selim
 */

#include "fifo.h"
void main()
{
	FIFO_buf_t FIFO_UART ;
	element_type i, temp=0;
	if(FIFO_init(&FIFO_UART , uart_buf, 5) == FIFO_no_error)
		printf("fifo init ====done====");

	for(i=0 ; i < 7; i++)
	{
		printf("FIFO enqueue (%x) \n",i) ;
		if(FIFO_enqueue(&FIFO_UART , i) == FIFO_no_error)
			printf("\t fifo enqueue ===done===\n");
		else
			printf("\t fifo enqueue ===failed===\n");
	}

	FIFO_print(&FIFO_UART);

	if(FIFO_dequeue(&FIFO_UART , &temp) == FIFO_no_error)
		printf("\t fifo dequeue %x ===done===\n", temp);
	if(FIFO_dequeue(&FIFO_UART , &temp) == FIFO_no_error)
		printf("\t fifo dequeue %x ===done===\n", temp);

	FIFO_print(&FIFO_UART);
}
