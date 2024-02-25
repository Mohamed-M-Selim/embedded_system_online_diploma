/*
 * students.c
 *
 *  Created on: Jan 14, 2024
 *      Author: selim
 */

#include "students.h"

//effective data
struct Sdata {
	int ID;
	char name[40];
	float height;
};

//linkedlist node
struct Sstudent {
	struct Sdata student;
	struct Sstudent *nxt_student;
};

struct Sstudent *GP_first_student = NULL;

//APIs

//create new record API
void add_student() {
	struct Sstudent *pNew_student;
	struct Sstudent *pLast_student;
	char temp_txt[40];

	//check if list empty == yes
	if (GP_first_student == NULL) {

		//create new record
		pNew_student = (struct Sstudent*) malloc(sizeof(struct Sstudent));
		//assign it to GP_first_student
		GP_first_student = pNew_student;
	} else // list contain record
	{
		//navigate till reaching last record
		pLast_student = GP_first_student;
		while (pLast_student->nxt_student != NULL) {
			pLast_student = pLast_student->nxt_student;
		}
		//create new record
		pNew_student = (struct Sstudent*) malloc(sizeof(struct Sstudent));
		//we can check if pNew actually got created because memory might not be enough
		pLast_student->nxt_student = pNew_student;
	}

	//fill new record
	printf("\n Enter ID: ");
	gets(temp_txt);
	pNew_student->student.ID = atoi(temp_txt);

	printf("\n Enter name: ");
	gets(pNew_student->student.name);

	printf("\n Enter height: ");
	gets(temp_txt);
	pNew_student->student.height = atof(temp_txt);

	//set the next pointer (new_student) to null
	pNew_student->nxt_student = NULL;
}

//API to delete certain student entry
int delete_student() {

	char temp_text[40];
	unsigned int selected_ID;

	//get the selected id
	printf("\n enter the ID of the student to be deleted");
	gets(temp_text);
	selected_ID = atoi(temp_text);

	//check if list is empty first
	if (GP_first_student) {
		struct Sstudent *pSelected_student = GP_first_student;
		struct Sstudent *pPrevious_student;

		//loop on all records
		while (pSelected_student) {
			//compare each node with selected ID
			if (pSelected_student->student.ID == selected_ID) {
				if (pPrevious_student) {
					pPrevious_student->nxt_student =
							pSelected_student->nxt_student;
				} else //1st student == selected ID
				{
					GP_first_student = pSelected_student->nxt_student;
				}
				free(pSelected_student);
				return 1;

			}
			pPrevious_student = pSelected_student;
			pSelected_student = pSelected_student->nxt_student;
		}

		printf("\n ID not found");
		return 0;

	} else {
		printf("list is empty");
	}
	return 0;
}

void view_students() {

	struct Sstudent *pCurrent_student = GP_first_student;
	int count = 1;
	if (GP_first_student == NULL)
		printf("\n list is empty");
	else {
		while (pCurrent_student) {
			printf("\t record number: %d\n", count++);
			printf(" Student ID: %d\n", pCurrent_student->student.ID);
			printf(" Student name: %s\n", pCurrent_student->student.name);
			printf(" Student height: %.2f\n", pCurrent_student->student.height);

			pCurrent_student = pCurrent_student->nxt_student;
		}
		printf("\n===DONE===");
	}

}

void delete_all() {
	struct Sstudent *pCurrent_student = GP_first_student;
	if (GP_first_student == NULL)
		printf("\n list is empty");
	else {
		while (pCurrent_student) {
			struct Sstudent *temp;
			temp = pCurrent_student;
			pCurrent_student = pCurrent_student->nxt_student;
			free(temp);
		}
		GP_first_student = NULL;
		printf("\n===DONE===");
	}
}

void GetNth() {
	struct Sstudent *pCurrent_student = GP_first_student;
	struct Sstudent *selected_student;
	char temp_txt[40];
	printf("\t Write the index of the record you want to review :");
	gets(temp_txt);

	int index = atoi(temp_txt);
	int count = 1;
	if (GP_first_student == NULL)
		printf("\n list is empty");
	else {
		while (pCurrent_student) {
			if (count == index) {
				selected_student = pCurrent_student;
				break;
			} else {
				pCurrent_student = pCurrent_student->nxt_student;
				count++;
			}
		}
		printf("\t Student record : %d\n", index);
		printf("Selected student ID : %d \n", selected_student->student.ID);
		printf("Selected student name : %s \n", selected_student->student.name);
		printf("Selected student height : %f \n",
				selected_student->student.height);
	}
}

void list_length() {
	struct Sstudent *pCurrent_student = GP_first_student;
	int count = 0;
	if (GP_first_student == NULL)
		printf("\n list is empty");
	else {
		while (pCurrent_student) {
			count++;
			pCurrent_student = pCurrent_student->nxt_student;
		}
		printf("\n The length of the list is %d", count);
	}
}

void find_mid() {
	struct Sstudent *slow_pointer = GP_first_student;
	struct Sstudent *fast_pointer = GP_first_student;
	int count = 1;
	if (GP_first_student == NULL)
		printf("\n list is empty");
	else {
		while (fast_pointer->nxt_student) {
			slow_pointer = slow_pointer->nxt_student;
			fast_pointer = fast_pointer->nxt_student->nxt_student;
			count++;
		}
		printf("\n\t The middle record of the list is %d", count);
		printf("\n\t Student ID : %d", slow_pointer->student.ID);
		printf("\n\t Student Name: %s", slow_pointer->student.name);
		printf("\n\t Student height: %.2f", slow_pointer->student.height);
	}
}
