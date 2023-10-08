#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float arr[100],temp;
	int num,i,loc;

	printf("enter number of elements:");
	scanf("%d",&num);

	for(i = 0;i < num; i++)
	{
		scanf("%f",&arr[i]);
	}

	for(i = 0;i < num; i++)
	{
		printf("%g ",arr[i]);
	}
	printf("\n");

	printf("enter the number to be inserted: ");
	scanf("%f",&temp);

	printf("enter the location: ");
	scanf("%d",&loc);

	for(i = num;i >= loc; i--)
	{
		arr[i] = arr[i - 1];
	}
	num++;

	arr[loc-1] = temp;

	for(i = 0;i < num; i++)
	{
		printf("%g ",arr[i]);
	}
	printf("\n");

	return 0;
}

