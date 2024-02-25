#include <stdio.h>


float getsqrt(float x)
{
	float ans = x/2;
	while((ans*ans) - x > 0.0001)
	{
		ans = (x/ans + ans) / 2.0 ;
	}

	return ans;
}

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float n;
	printf("enter the number:");
	scanf("%f",&n);

	printf("square root of %f = %.3f",n,getsqrt(n));


	return 0;
}

