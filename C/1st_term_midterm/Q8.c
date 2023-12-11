#include <stdio.h>

void revarr(int inarr[],int size);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int a[5] = {1,2,3,4,5};

	revarr(a,5);
	for(int i = 0; i<5; i++)
		printf(" %d",a[i]);

	return 0;
}

void revarr(int inarr[],int size)
{
	int i,temp;

	for(i = 0; i <= size/2; i++)
	{
		if(size%2 !=0){
			if(i == size/2)
				continue;
		}
		temp = inarr[i];
		inarr[i] = inarr[size-1-i];
		inarr[size-1-i] = temp;
	}
}






