#include <stdio.h>

int sumto100(int x);


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	
	printf("sum = %d",sumto100(n));

	return 0;
}


int sumto100(int x)
{
	int sum = 0;

	sum = x*(x+1)/2;

	return sum;

}


