#include <stdio.h>

#define size 7

int findnum(int x[],int arrsize);


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int input[size] = {4,2,5,2,5,7,4};


	printf("the unique number is %d", findnum(input, size));

	return 0;
}


int findnum(int x[],int arrsize)
{
	int i, j = 0, unique = x[0];
	for(i = 1; i < size;i++)
	{
		if(unique == x[i] && i != j)
		{
			i = 0;
			unique = x[++j];
		}
	}
	return unique;
}
