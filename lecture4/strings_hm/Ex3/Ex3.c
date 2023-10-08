#include <stdio.h>
#include <string.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[100], revstr[100];
	int i;

	printf("enter a string: ");
	gets(str);

	for(i = 0; str[i] != '\0'; i++)
	{
		revstr[i] = str[strlen(str) - 1 - i];
	}
	revstr[i] = str[i];

	printf("%s",revstr);

	return 0;
}

