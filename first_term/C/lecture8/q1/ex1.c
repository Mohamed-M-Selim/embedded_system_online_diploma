#include <stdio.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int m = 29;
	printf("address of m : %x\nValue of m : %d\n",&m,m);
	int* ab;
	ab = &m;
	printf("now ab is assigned with address of m.\n"
			"Address of pointer ab : %x\nContent of pointer ab : %d\n",ab,*ab);
	m = 34;
	printf("the value of m assigned to 34 now.\n"
			"Address of pointer ab : %x\nContent of pointer ab : %d\n",ab,*ab);
	*ab = 7;
	printf("the value of ab pointer assigned to 7 now.\n"
				"Address of m : %x\nValue of m : %d\n",&m,m);

	return 0;
}


