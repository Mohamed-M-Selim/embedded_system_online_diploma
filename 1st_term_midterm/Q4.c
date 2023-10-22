#include <stdio.h>

int revnum(int x);


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x, out = 0;
	printf("enter input:");
	scanf("%d",&x);

	out = revnum(x);
	printf("input:%d -> output:%d",x,out);


	return 0;
}

int revnum(int x)
{
	int rev = 0;
	while(x != 0)
	{
		rev += x%10;
		x /= 10;
		if(x != 0)
			rev *=10 ;
	}

	return rev;
}
