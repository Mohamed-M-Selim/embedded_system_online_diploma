#include <stdio.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x;
	printf("enter number you want to check: ");
	scanf("%d",&x);

	if(x%2 == 0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);


	return 0;
}
