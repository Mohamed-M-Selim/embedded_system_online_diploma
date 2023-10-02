#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x,y;
	printf("enter 2 integers: ");
	scanf("%d",&x);
	scanf("%d",&y);

	int product = x * y;
	printf("Sum = %d",product);

	return 0;
}

