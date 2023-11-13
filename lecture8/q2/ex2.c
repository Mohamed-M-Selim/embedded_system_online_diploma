#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char alph[26];
	char* ptr;
	ptr = alph;

	*ptr = 'A';
	printf("%c ",*ptr);

	for(int i = 1; i < 26; i++)
	{
		*(ptr+i) = *ptr + i ;
		printf("%c ",*(ptr+i));
	}


	return 0;
}
