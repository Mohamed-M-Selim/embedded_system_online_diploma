#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char x;
	printf("enter a character: ");
	scanf("%c",&x);

	printf("ASCII number of the character is = %d",x);


	return 0;
}

