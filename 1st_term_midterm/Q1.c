#include <stdio.h>
#include <string.h>

int sumdigits(int x)
{
	int add = 0;
	while((x%10) != 0)
	{
		add += x%10;
		x /=10;
	}

	return add;
}
int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int input;
	printf("enter input:");
	scanf("%d",&input);

	printf("input:%d->output:%d",input,sumdigits(input));


	return 0;
}

