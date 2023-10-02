#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float x;
	printf("enter a number: ");
	scanf("%f",&x);

	if(x > 0)
		printf("%f is positive",x);
	else if (x < 0)
		printf("%f is negative",x);
	else if (x == 0)
		printf("%f is ZERO",x);


	return 0;
}

