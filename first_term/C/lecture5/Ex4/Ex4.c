#include <stdio.h>

int power(int x, int y);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x,y;
	printf("enter base number: ");
	scanf("%d",&x);
	printf("Enter power number(+ve integer): ");
	scanf("%d",&y);

	printf("%d^%d = %d",x, y, power(x,y));

	return 0;
}

int power(int x, int y)
{
	if(y==1)
		return x;
	else
		y--;

	return x*(power(x,y));
}
