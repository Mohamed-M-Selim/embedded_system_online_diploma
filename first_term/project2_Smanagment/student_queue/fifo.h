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
#include "stdlib.h"
#include "string.h"
#include "conio.h"

struct sinfo {
	char f_name[50] ;
	char l_name[50] ;
	int roll ;
	float gpa ;
	int cid[5] ;

};

//USER config.
//select the element type
#define element_type struct sinfo
//create buffer 1
#define width 55
element_type uart_buf[width];

//FIFO data types
typedef struct {
	unsigned int length ;
	unsigned int count;
	element_type* base ;
	element_type* head ;
	element_type* tail ;
}FIFO_buf_t;

FIFO_buf_t FIFO_UART ;

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

void add_student_manually();
void add_student_file();
void find_r1();	//find student by roll number
void find_fn();	//find student by first name
void find_c();	//find students by registered course
void tot_s();	//count students
void del_s();	//delete a student
void up_s();	//update an entry
void show_s();	//show all


#endif /* FIFO_H_ */
