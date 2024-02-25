#include <stdio.h>
#include <string.h>


struct employee
{
	char name[30];
	int id;

};

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct employee emp1={"bod",1},emp2={"shoq",2},emp3={"ser",3};

	struct employee *ptr[3] = {&emp1,&emp2,&emp3};
	struct employee (*(*pt)[3]) = &ptr;

	printf("\n\nEmployee name:%s\n"
			"Employee ID : %d",(*(*pt))->name,(*(*pt))->id);


	return 0;
}


