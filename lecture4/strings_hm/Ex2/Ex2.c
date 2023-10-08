#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[100];
	int i;

	printf("enter a string: ");
	gets(str);

	for(i = 0; str[i] != '\0';i++)
	{

	}

	printf("length of the string is %d",i);

	return 0;
}

