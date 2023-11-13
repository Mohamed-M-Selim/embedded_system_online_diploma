#include <stdio.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[15];
	int* ptr = arr;
	int x;

	printf("input number of elemets to store(max 15) : ");
	scanf("%d",&x);

	printf("input %d elements to the array:\n",x);

	for(int i = 0; i < x ; i++)
	{
		printf("element - %d = ",i+1);
		scanf("%d",ptr);
		ptr++;
	}

	printf("\n\nelements in reverse order are :\n");

	for(int i = x-1; i >= 0 ; i--)
	{
		ptr--;
		printf("element - %d = %d\n",i+1,*ptr);
	}

	return 0;
}


