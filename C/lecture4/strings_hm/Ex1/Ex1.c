#include <stdio.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[100], srch;
	int i,count = 0;

	printf("enter a string: ");
	gets(str);

	printf("enter a character to find it's frequency: ");
	scanf("%c",&srch);

	for(i = 0; str[i] != '\0';i++)
	{
		if(str[i] == srch){
			count++;
		}

	}

	printf("frequency of %c = %d",srch,count);


	return 0;
}
