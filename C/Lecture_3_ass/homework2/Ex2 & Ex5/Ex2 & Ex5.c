#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("Enter an Alphabet: ");
	scanf("%c",&c);

	if (c == 'a' || c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U')
		printf("%c is a vowel",c);
	else if(c < 65 || (97 > c && c > 90) ||c > 122)
		printf("character is not Alphabet");
	else
		printf("%c is consonant",c);

	return 0;
}

