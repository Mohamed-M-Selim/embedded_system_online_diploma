#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n;
	printf("enter an integer: ");
	scanf("%d",&n);

	if(n < 0){
		printf("ERROR!!! factorial of a negative number doesn't exist.");
	}
	else {
			int i = 1,fact = 1;
	do{
		fact *= i;
		i++;

	}while(i <= n);

	printf("factorial = %d",fact);
	}


	return 0;
}

