/*
 * lifo.h
 *
 *  Created on: Jan 8, 2024
 *      Author: selim
 */

#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include "stdlib.h"

//type defs
 typedef struct{
	unsigned int length ;
	unsigned int count ;
	unsigned int* base ;
	unsigned int* head ;

}LIFO_buf_t;

typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_status;

//APIs
LIFO_status LIFO_add_item (LIFO_buf_t* lifo_buf , unsigned int item);
LIFO_status LIFO_get_item (LIFO_buf_t* lifo_buf , unsigned int* item);
LIFO_status LIFO_init (LIFO_buf_t* lifo_buf, unsigned int* buf, unsigned int length);


#endif /* LIFO_H_ */
