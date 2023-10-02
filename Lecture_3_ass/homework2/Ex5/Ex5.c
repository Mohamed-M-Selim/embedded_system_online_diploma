#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("enter a character: ");
	scanf("%c",&c);

	if(c < 65 || (97 > c && c > 90) ||c > 122)
			printf("character is not Alphabet");
	else
		printf("character is Alphabet");


	return 0;
}

