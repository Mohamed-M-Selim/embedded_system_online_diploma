/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: selim
 */

#include "students.h"



void main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char temp_txt[40];
	while (1) {
		printf("\n=-=-=-=-=-=-=\n");
		printf("\n Choose of the following Options");
		printf("\n 1: Add record");
		printf("\n 2: Delete student");
		printf("\n 3: View list");
		printf("\n 4: Delete all");
		printf("\n 5: Get Nth record");
		printf("\n 6: View list length");
		printf("\n 7: find_mid");
		printf("\nEnter option number: ");
		gets(temp_txt);
		printf("\n=-=-=-=-=-=-=\n");

		switch (atoi(temp_txt)) {
		case 1:
			add_student();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_students();
			break;
		case 4:
			delete_all();
			break;
		case 5:
			GetNth();
			break;
		case 6:
			list_length();
			break;
		case 7:
			find_mid();
			break;
		default:
			printf("Wrong entry!");
			break;
		}
	}

}

