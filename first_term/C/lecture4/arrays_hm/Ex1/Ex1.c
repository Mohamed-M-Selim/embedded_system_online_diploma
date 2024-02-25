#include <stdio.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2];

	printf("enter the elements of the 1st matrix. \n");
	int i,j;
	for(i = 0; i < 2; i++){

		for(j = 0; j < 2; j++){

			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&arr1[i][j]);

		}
	}

	printf("enter the elements of the 2st matrix. \n");

	for(i = 0; i < 2; i++){

		for(j = 0; j < 2; j++){

			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&arr2[i][j]);

		}
	}

	for(i = 0; i < 2; i++){

		for(j = 0; j < 2; j++){

			sum[i][j] = arr1[i][j] + arr2[i][j];

		}
	}

	printf("sum of matrix: \n");

	for(i = 0; i < 2; i++){

		for(j = 0; j < 2; j++){

			printf("%g		",sum[i][j]);

		}
		printf("\n");
	}

	return 0;
}
