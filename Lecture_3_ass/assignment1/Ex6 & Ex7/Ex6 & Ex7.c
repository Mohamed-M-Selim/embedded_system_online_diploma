#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float a,b;
	printf("enter the value of a: ");
	scanf("%f",&a);
	printf("enter the value of b: ");
	scanf("%f",&b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After Swapping, value of a = %f\n",a);
	printf("After Swapping, value of b = %f\n",b);


	return 0;
}

