/*
 * lifo.c
 *
 *  Created on: Jan 8, 2024
 *      Author: selim
 */
#include "lifo.h"

//APIs
LIFO_status LIFO_add_item (LIFO_buf_t* lifo_buf , unsigned int item)
{
	//check lifo is valid
	if (!lifo_buf->base || !lifo_buf->head)
		return LIFO_null;
	//check lifo is full
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_full ;
	//add value
	*(lifo_buf->head) = item ;
	lifo_buf->head++ ;
	lifo_buf->count++ ;

	return LIFO_no_error ;

}
LIFO_status LIFO_get_item (LIFO_buf_t* lifo_buf , unsigned int* item)
{
	//check lifo is valid
	if (!lifo_buf->base || !lifo_buf->head)
		return LIFO_null;
	//check lifo is empty
	if(lifo_buf->count == 0)
		return LIFO_empty ;


	lifo_buf->head-- ;
	*item = *(lifo_buf->head) ;
	lifo_buf->count-- ;

	return LIFO_no_error ;
}
LIFO_status LIFO_init (LIFO_buf_t* lifo_buf, unsigned int* buf, unsigned int length)
{
	if(buf == NULL)
		return LIFO_null ;

	lifo_buf->base =buf ;
	lifo_buf->head = buf ;
	lifo_buf->length = length ;
	lifo_buf->count = 0;
	return LIFO_no_error;
}
