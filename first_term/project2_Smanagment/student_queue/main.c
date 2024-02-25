/*
 * main.c
 *
 *  Created on: Jan 11, 2024
 *      Author: selim
 */

#include "fifo.h"


void main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


//	element_type i, temp=0;
	if(FIFO_init(&FIFO_UART , uart_buf, 50) == FIFO_no_error)
		printf("fifo init ====done====\n");

	char temp_txt[40];
	printf("Welcome to student management system\n");


	while (1) {
		printf("\n=-=-=-=-=-=-=\n");
		printf(" Choose of the following Options \n");
		printf(" 1: Add Student details manually \n");
		printf(" 2: Add Student details from text file \n");
		printf(" 3: Find the student details by Roll number \n");
		printf(" 4: Find the student details by First name \n");
		printf(" 5: Find the student details by Course ID \n");
		printf(" 6: Find the total number of students \n");
		printf(" 7: Delete student by roll number \n");
		printf(" 8: Update student by roll number \n");
		printf(" 9: Show all information \n");
		printf(" 10: To exit \n");
		printf("\nEnter option number: ");
		gets(temp_txt);

		switch (atoi(temp_txt)) {
		case 1:
			add_student_manually();
			break;
		case 2:
			add_student_file();
			break;
		case 3:
			find_r1();
			break;
		case 4:
			find_fn();
			break;
		case 5:
			find_c();
			break;
		case 6:
			tot_s();
			break;
		case 7:
			del_s();
			break;
		case 8:
			up_s();
			break;
		case 9:
			show_s();
			break;
		case 10:
			printf("-----THE END-----");
			return;
			break;
		default:
			printf("Wrong entry!");
			break;
		}
	}

}
