#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float mat[10][10],t[10][10];

	int x,y,i,j;

	printf("enter rows and columns of the matrix:-\n");
	scanf("%d",&x);
	scanf("%d",&y);

	printf("enter elements of the matrix.\n");

	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			printf("enter a%d%d: ",i+1,j+1);
			scanf("%f",&mat[i][j]);
		}
	}

	printf("entered matrix :- \n");
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			printf("%g	",mat[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			t[j][i] = mat[i][j];
		}
	}

	printf("Transpose of matrix:-\n");
	for(i = 0; i < y; i++)
	{
		for(j = 0; j < x; j++)
		{
			printf("%g	", t[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

