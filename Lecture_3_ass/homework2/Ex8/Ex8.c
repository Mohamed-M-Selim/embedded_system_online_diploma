#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char op;
	float x,y;

	printf("enter operator either + or - or * or / : ");
	scanf("%c",&op);

	printf("enter 2 numbers: ");
	scanf("%f",&x);
	scanf("%f",&y);

	switch(op) {
	case '+':
		printf("%f %c %f = %f",x,op,y,x+y);

		break;
	case '-':
		printf("%f %c %f = %f",x,op,y,x-y);

		break;
	case '*':
		printf("%f %c %f = %f",x,op,y,x*y);

		break;
	case '/':
		printf("%f %c %f = %f",x,op,y,x/y);

		break;
	default:
		printf("wrong operator input");
		break;



	}

	return 0;
}

