#include <stdio.h>
#include <string.h>

struct student{

	char name[50];
	int roll;
	float marks;

};

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct student n1;

	printf("enter information of students:\n");

	printf("Enter Name: ");
	gets(n1.name);
	printf("Enter roll Number: ");
	scanf("%d",&n1.roll);
	printf("Enter Marks: ");
	scanf("%f",&n1.marks);

	printf("Displaying information.");
	printf("name: %s\nRoll: %d\nMarks: %.2f",n1.name,n1.roll,n1.marks);


	return 0;
}


