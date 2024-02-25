#include <stdio.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char x[50],rev[50];
	printf("\nPointer : Print a string in reverse order\n"
			"----------------------------\n"
			"Input a string :");
	gets(x);

	char* ptr;
	char* rvptr;
	ptr = x;
	rvptr = rev;
	int i = 0;
	while(*ptr != '\0')
	{
		ptr++;
		i++;
	}

	int k = i;

	do
	{
		ptr--;
		*rvptr = *ptr;
		rvptr++;
		i--;
	}while(i > 0);

	*rvptr = '\0';
	rvptr-=k;

	printf("Reverse of the string is : %s",rvptr);

	return 0;
}
