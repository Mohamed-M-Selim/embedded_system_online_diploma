#include <stdio.h>
#include <string.h>

int bitcounter(int x);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int input;
	printf("Enter a number: ");
	scanf("%d",&input);

	printf("number of ones in number %d = %d",input,bitcounter(input));

	return 0;
}

int bitcounter(int x)
{
	int count = 0;
	while((x | 0) != 0)
	{
		if((x & 1) == 1)
		{
			count++;
		}
		x = x >> 1;

	}

	return count;
}

