#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n = 0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	printf("You entered: %d",n);

	return 0;
}

