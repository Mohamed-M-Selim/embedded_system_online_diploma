#include <stdio.h>
#include <string.h>

#define pi 3.1415
#define area(r) (pi)*(r)*(r)

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	float radius;

	printf("enter radius of circle:");
	scanf("%f",&radius);

	printf("Area = %.2f",area(radius));



	return 0;
}


