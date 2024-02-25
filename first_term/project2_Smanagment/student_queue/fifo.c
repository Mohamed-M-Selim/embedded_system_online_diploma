/*
 * fifo.c
 *
 *  Created on: Jan 11, 2024
 *      Author: selim
 */
#include "fifo.h"

FILE *students_file;

//FIFO APIs
FIFO_buf_status_t FIFO_init(FIFO_buf_t *fifo, element_type *buf,
		uint32_t length) {

	if (buf == NULL)
		return FIFO_null;

	fifo->base = buf;
	fifo->head = buf;
	fifo->tail = buf;
	fifo->length = length;
	fifo->count = 0;

	return FIFO_no_error;
}
FIFO_buf_status_t FIFO_enqueue(FIFO_buf_t *fifo, element_type item) {

	if (!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	//check if full
	if (FIFO_is_full(fifo) == FIFO_full)
		return FIFO_full;

	*(fifo->head) = item;
	fifo->count++;
	if (fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->head = fifo->base;
	else
		fifo->head++;

	return FIFO_no_error;
}
FIFO_buf_status_t FIFO_dequeue(FIFO_buf_t *fifo, element_type *item) {

	if (!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	//check if fifo empty ?
	if (fifo->count == 0)
		return FIFO_empty;

	*item = *(fifo->tail);
	fifo->count--;

	//check if we reached end of fifo
	if (fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->tail = fifo->base;
	else
		fifo->tail++;

	return FIFO_no_error;
}
FIFO_buf_status_t FIFO_is_full(FIFO_buf_t *fifo) {

	if (!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;

	if (fifo->count == fifo->length)
		return FIFO_full;

	return FIFO_no_error;
}
//void FIFO_print (FIFO_buf_t* fifo){
//
//	element_type* temp;
//	int i;
//	if(fifo->count == 0)
//	{
//		printf("fifo is empty\n");
//	}else{
//		temp = fifo->tail ;
//		printf("\n =========fifo_print======\n");
//		for(i = 0 ; i < fifo->count ; i++)
//		{
//			printf("\t %x \n",*temp);
//			temp++;
//		}
//	}
//	printf("=-=-=-=");
//}

void add_student_manually() {
	element_type temp;
	element_type *temp2 = FIFO_UART.tail;

	int i;

	printf("---------\nAdd student manually\n---------\n");

	printf("Enter the Roll Number: ");
	scanf("%d", &temp.roll);
	getchar();

	//----------------check if roll number is taken--------------

	for (i = 0; i < FIFO_UART.count; i++) {
		if (temp.roll == temp2->roll) {
			printf("[ERROR] roll number %d is already taken\n", temp.roll);
			return;
		} else {
			temp2++;
		}
	}

	printf("[INFO] roll number %d is saved successfully\n", temp.roll);
	printf("Enter the First Name: ");
	gets(temp.f_name);
	printf("Enter the Last Name: ");
	gets(temp.l_name);
	printf("Enter the GPA: ");
	scanf("%f", &temp.gpa);
	getchar();
	printf("Enter the Course ID for each Course.\n");
	for (i = 0; i < 5; i++) {
		printf("Course %d ID: ", i + 1);
		scanf("%d", &temp.cid[i]);
		getchar();
	}

	if (FIFO_enqueue(&FIFO_UART, temp) == FIFO_no_error) {
		printf("[INFO] Student details added successfully.\n");
	} else {
		printf("[INFO] Error adding student details.\n");
	}

	printf("[INFO] The total number of students is %d.\n", FIFO_UART.count);
	printf("[INFO] You can add up to %d students.\n", FIFO_UART.length);
	printf("[INFO] You can add %d more students.\n",
			(FIFO_UART.length - FIFO_UART.count));

}

void add_student_file() {
	printf("---------\nAdd student by file\n---------\n");

	int i,flag = 0;
	element_type temp;
	element_type *temp2;

	students_file = fopen("students.txt", "r");

	if (students_file == NULL) {
		printf("\n [ERROR] students.txt file not found.");
		printf("\n [ERROR] adding students from file failed.");
		return;
	}

	while (fscanf(students_file, "%d %s %s %f %d %d %d %d %d [^\n]", &temp.roll,
			&temp.f_name, &temp.l_name, &temp.gpa, &temp.cid[0], &temp.cid[1],
			&temp.cid[2], &temp.cid[3], &temp.cid[4]) != EOF)
	{
		temp2 = FIFO_UART.tail;

		for (i = 0; i < FIFO_UART.count; i++) {

			if (temp.roll == temp2->roll) {
				printf("[ERROR] roll number %d is already taken\n", temp.roll);
				flag = 1;
				break;
			} else {
				flag = 0;
				temp2++;
			}
		}

		if (flag == 0 && FIFO_enqueue(&FIFO_UART, temp) == FIFO_no_error) {
			printf("[INFO] Roll number %d is saved successfully.\n", temp.roll);
		} else {
			printf("[INFO] Error adding student %d details.\n",temp.roll);
		}
	}

	printf("[INFO] The total number of students is %d.\n", FIFO_UART.count);
	printf("[INFO] You can add up to %d students.\n", FIFO_UART.length);
	printf("[INFO] You can add %d more students.\n",
			(FIFO_UART.length - FIFO_UART.count));
}

void find_r1()	//find student by roll number
{
	int srchroll, i;
	element_type *temp2 = FIFO_UART.tail;

	printf("---------\nFind student by roll number.\n---------\n");
	printf("Enter Student roll number:");
	scanf("%d", &srchroll);
	getchar();

	for (i = 0; i < FIFO_UART.count; i++) {
		if (srchroll == temp2->roll) {
			printf("The student details are:-\n ");

			printf("First Name: %s\n", temp2->f_name);
			printf("Last Name: %s\n", temp2->l_name);
			printf("GPA: %.2f\n", temp2->gpa);
			printf("Courses registered:-\n");
			for (i = 0; i < 5; i++) {
				printf("Course %d ID: %d\n", i + 1, temp2->cid[i]);
			}
			return;
		}
		temp2++;
	}

	printf("[ERROR] Roll number %d not found.", srchroll);

}
void find_fn()	//find student by first name
{
	int i, flag = 0;
	char srchname[40];
	element_type *temp2 = FIFO_UART.tail;

	printf("---------\nFind students by first name.\n---------\n");
	printf("Enter Student First name:");
	gets(srchname);

	for (i = 0; i < FIFO_UART.count; i++) {
		if (strcmp(srchname, temp2->f_name) == 0) {
			flag = 1;
			printf("The student details are:-\n ");

			printf("Roll number: %d\n", temp2->roll);
			printf("First Name: %s\n", temp2->f_name);
			printf("Last Name: %s\n", temp2->l_name);
			printf("GPA: %.2f\n", temp2->gpa);
			printf("Courses registered:-\n");
			for (i = 0; i < 5; i++) {
				printf("Course %d ID: %d\n", i + 1, temp2->cid[i]);
			}
		}
		temp2++;
	}
	if (flag == 0) {
		printf("[ERROR] First name %s not found.", srchname);
	}

}
void find_c()	//find students by registered course
{
	int srchCID, i, j, flag = 0;
	element_type *temp2 = FIFO_UART.tail;

	printf("---------\nFind students by registered course.\n---------\n");

	printf("Enter course ID:");
	scanf("%d", &srchCID);
	getchar();

	for (i = 0; i < FIFO_UART.count; i++) {
		for (j = 0; j < 5; j++) {
			if (srchCID == temp2->cid[j]) {
				flag = 1;
				printf("The student details are:-\n ");

				printf("Roll number: %d\n", temp2->roll);
				printf("First Name: %s\n", temp2->f_name);
				printf("Last Name: %s\n", temp2->l_name);
				printf("GPA: %.2f\n", temp2->gpa);
				break;
			}
		}
		temp2++;
	}
	if (flag == 0) {
		printf("[ERROR] Course ID %d not found.", srchCID);
	}

}
void tot_s()	//count students
{
	printf("---------\nCount the students.\n---------\n");

	printf("[INFO] The total number of students is %d.\n", FIFO_UART.count);
	printf("[INFO] You can add up to %d students.\n", FIFO_UART.length);
	printf("[INFO] You can add %d more students.\n",
			(FIFO_UART.length - FIFO_UART.count));



}
void del_s()	//delete a student
{
	printf("---------\nDelete a student.\n---------\n");
	int delroll,i;

	element_type *temp2 = FIFO_UART.base;


	printf("Enter the roll number of the student to be deleted: ");
	scanf("%d",&delroll);
	getchar();

	for (i = 0; i < FIFO_UART.count; i++) {
		if (delroll == temp2->roll) {

			if(FIFO_dequeue(&FIFO_UART,temp2) == FIFO_no_error){
				printf("[INFO] Student %d Removed successfully.",delroll);
			}else{
				printf("[ERROR] The Roll number %d is not found.",delroll);
			}
			return;
		}
		temp2++;
	}


}
void up_s()		//update an entry
{
	printf("---------\nUpdate an entry.\n---------\n");
	int uproll,i,choice,course_no,flag =0;
	element_type *temp2 = FIFO_UART.tail;
	char temp[40];


	printf("Enter the roll number of student to be updated: ");
	scanf("%d",&uproll);
	getchar();

	for (i = 0; i < FIFO_UART.count; i++) {
		if (uproll == temp2->roll) {
			printf("1.First name\n"
					"2.Last name\n"
					"3.Roll no.\n"
					"4.GPA\n"
					"5.Courses\n");
			scanf("%d",&choice);
			getchar();
			switch (choice) {
			case 1:
				printf("Enter new first name: ");
				gets(temp2->f_name);
				break;
			case 2:
				printf("Enter new last name: ");
				gets(temp2->l_name);
				break;
			case 3:
				printf("Enter new roll number: ");
				gets(temp);
				temp2->roll = atoi(temp);
				break;
			case 4:
				printf("Enter new GPA: ");
				gets(temp);
				temp2->gpa = atof(temp);
				break;
			case 5:
				printf("Enter course number: ");
				gets(temp);
				course_no = atoi(temp);
				switch(course_no){
				case 1:
					printf("Enter new %d course ID: ",course_no);
					gets(temp);
					temp2->cid[0] = atoi(temp);
					break;
				case 2:
					printf("Enter new %d course ID: ",course_no);
					gets(temp);
					temp2->cid[1] = atoi(temp);
					break;
				case 3:
					printf("Enter new %d course ID: ",course_no);
					gets(temp);
					temp2->cid[2] = atoi(temp);
					break;
				case 4:
					printf("Enter new %d course ID: ",course_no);
					gets(temp);
					temp2->cid[3] = atoi(temp);
					break;
				case 5:
					printf("Enter new %d course ID: ",course_no);
					gets(temp);
					temp2->cid[4] = atoi(temp);
					break;
				default:
					flag = 1;
					printf("Wrong entry!");
					break;
				}
				break;
			default:
				flag = 1;
				printf("Wrong entry!");
				break;
			}
	}
		temp2++;
	}
	if(flag == 0){
		printf("[INFO] UPDATED SUCCESSFULLY.\n");
	}

}

void show_s()	//show all
{
	int i,j;
	element_type* temp2 ;
	temp2 = FIFO_UART.tail;

	printf("---------\nShow all students.\n---------\n");

	for (i = 0; i < FIFO_UART.count; i++) {
				printf("ENTRY %d:-\n ",i+1);

				printf("Roll number: %d\n", temp2->roll);
				printf("First Name: %s\n", temp2->f_name);
				printf("Last Name: %s\n", temp2->l_name);
				printf("GPA: %.2f\n", temp2->gpa);
				for (j = 0; j < 5; j++) {
					printf("Course %d ID: %d\n", j + 1, temp2->cid[j]);
				}

		temp2++;
	}

}
