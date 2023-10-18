#include <stdio.h>

int factorial(int x);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x;

	printf("enter a positive integer:");
	scanf("%d",&x);

	printf("Factorial of %d = %d", x, factorial(x));
	factorial(x);
	return 0;
}


int factorial(int x)
{
	if (x == 1)
		return x;
	else
		return x*(factorial(x-1));

}
