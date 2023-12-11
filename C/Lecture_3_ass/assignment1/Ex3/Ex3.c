#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x,y;
	printf("enter 2 integers: ");
	scanf("%d",&x);
	scanf("%d",&y);
	
	int sum = x + y;
	printf("Sum = %d",sum);

	
	return 0;
}

