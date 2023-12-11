#include <stdio.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float x,y,z;
	printf("enter 3 numbers: ");
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);

	if(x > y){
		if(x > z){
			printf("%f is largest number",x);
		}
		else
			printf("%f is largest number",z);

	}
	else{
				if(y > z){
		printf("%f is largest number",y);
	}
	else
		printf("%f is largest number",z);
	}


	
	return 0;
}

