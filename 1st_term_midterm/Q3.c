#include <stdio.h>
#include <string.h>

int checkprime(int x);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x,y;

	printf("enter 2 numbers(intervals):");
	scanf("%d",&x);
	scanf("%d",&y);

	printf("Prime numbers between %d and %d are:",x,y);

	int i;
	for(i = x+1; i < y; i++)
	{

		if (!checkprime(i))
			printf(" %d",i);
	}

	return 0;
}

int checkprime(int x)
{
	int j,flag = 0;
	for(j = 2; j <= x/2; j++)
	{
		if(x%j == 0){
			flag = 1;
			break;
		}
	}
	return flag;
}
