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

	struct student n[10];

	printf("enter information of students:\n");
	for(int i = 0; i < 10;i++)
	{
		n[i].roll = i+1;
		printf("for roll number %d\n",n[i].roll);
		printf("Enter Name: ");
		scanf("%s",n[i].name);
		printf("Enter Marks: ");
		scanf("%f",&n[i].marks);
	}


	printf("Displaying information.");
	for(int i = 0; i < 10;i++)
	{
		printf("name: %s\nRoll: %d\nMarks: %.2f\n",n[i].name,n[i].roll,n[i].marks);
	}


	return 0;
}


