#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float arr[100], avg = 0;
	int num = 0,i;

	printf("enter numbers of data: ");
	scanf("%d",&num);

	for(i = 0; i < num; i++)
	{
		printf("%d. enter number:",i+1);
		scanf("%f",&arr[i]);
	}

	for(i = 0; i < num; i++)
	{
		avg += arr[i];
	}

	printf("Average = %g",avg/num);

	return 0;
}

