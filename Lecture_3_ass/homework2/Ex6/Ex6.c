#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n;
	printf("enter an integer: ");
	scanf("%d",&n);

	int i = 1,sum = 0;
	do{
		sum += i;
		i++;

	}while(i <= n);

	printf("Sum = %d",sum);

	return 0;
}

