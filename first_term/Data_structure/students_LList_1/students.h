/*
 * students.h
 *
 *  Created on: Jan 14, 2024
 *      Author: selim
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"

//create new record API
void add_student();
//API to delete certain student entry
int delete_student();
void view_students();
void delete_all();
void GetNth();
void list_length();
void find_mid();

#endif /* STUDENTS_H_ */
