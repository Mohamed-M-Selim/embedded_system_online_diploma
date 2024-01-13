/*
 * fifo.c
 *
 *  Created on: Jan 11, 2024
 *      Author: selim
 */
#include "fifo.h"


//FIFO APIs
FIFO_buf_status_t FIFO_init (FIFO_buf_t* fifo, element_type* buf, uint32_t length){

	if (buf == NULL)
		return FIFO_null ;

	fifo->base = buf ;
	fifo->head = buf ;
	fifo->tail = buf ;
	fifo->length = length ;
	fifo->count = 0 ;

	return FIFO_no_error ;
}
FIFO_buf_status_t FIFO_enqueue (FIFO_buf_t* fifo,element_type item){

	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null ;
	//check if full
	if(FIFO_is_full(fifo) == FIFO_full)
		return FIFO_full ;

	*(fifo->head) = item ;
	fifo->count++;
	if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->head = fifo->base ;
	else
		fifo->head++;

	return FIFO_no_error ;
}
FIFO_buf_status_t FIFO_dequeue (FIFO_buf_t* fifo,element_type* item){

	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null ;
	//check if fifo empty ?
	if(fifo->count == 0)
		return FIFO_empty ;

	*item = *(fifo->tail) ;
	fifo->count--;

	//check if we reached end of fifo
	if(fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->tail = fifo->base ;
	else
		fifo->tail++;

	return FIFO_no_error ;
}
FIFO_buf_status_t FIFO_is_full (FIFO_buf_t* fifo){

	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null ;

	if(fifo->count == fifo->length)
		return FIFO_full ;

	return FIFO_no_error ;
}
void FIFO_print (FIFO_buf_t* fifo){

	element_type* temp;
	int i;
	if(fifo->count == 0)
	{
		printf("fifo is empty\n");
	}else{
		temp = fifo->tail ;
		printf("\n =========fifo_print======\n");
		for(i = 0 ; i < fifo->count ; i++)
		{
			printf("\t %x \n",*temp);
			temp++;
		}
	}
	printf("=-=-=-=");


}
