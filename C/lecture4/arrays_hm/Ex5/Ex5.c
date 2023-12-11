#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[100], num ,i, srch,loc = 0;

	printf("enter the number of elements:");
	scanf("%d",&num);

	for(i = 0; i < num; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i = 0; i < num; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	printf("enter the element to be searched for:");
	scanf("%d",&srch);


	for(i = 0;i < num; i++)
	{
		if(arr[i] == srch)
			loc = i+1;

	}
	if(loc == 0){
		printf("ERROR!! NOT FOUND.");
	}
	else{
		printf("number found at location: %d",loc);
	}

	return 0;
}

