/*
 * fifo.h
 *
 *  Created on: Jan 11, 2024
 *      Author: selim
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

//USER config.
//select the element type
#define element_type uint8_t
//create buffer 1
#define width 5
element_type uart_buf[width];

//FIFO data types

typedef struct {
	unsigned int length ;
	unsigned int count;
	element_type* base ;
	element_type* head ;
	element_type* tail ;

}FIFO_buf_t;

typedef enum {
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_buf_status_t;

//FIFO APIs

FIFO_buf_status_t FIFO_init (FIFO_buf_t* fifo, element_type* buf, uint32_t length);
FIFO_buf_status_t FIFO_enqueue (FIFO_buf_t* fifo,element_type item);
FIFO_buf_status_t FIFO_dequeue (FIFO_buf_t* fifo,element_type* item);
FIFO_buf_status_t FIFO_is_full (FIFO_buf_t* fifo);
void FIFO_print (FIFO_buf_t* fifo);








#endif /* FIFO_H_ */
