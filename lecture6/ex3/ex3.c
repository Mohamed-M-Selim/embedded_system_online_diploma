#include <stdio.h>
#include <string.h>


struct imgnum sumimg(struct imgnum x,struct imgnum y);


struct imgnum{

	float real;
	float img;

};

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct imgnum n1,n2,sum;

	printf("For 1st complex number\n");

	printf("Enter real and imaginary numbers respectively: ");
	scanf("%f",&n1.real);
	scanf("%f",&n1.img);

	printf("For 2nd complex number:\n");

	printf("Enter real and imaginary numbers respectively: ");
	scanf("%f",&n2.real);
	scanf("%f",&n2.img);

	sum = sumimg(n1,n2);

	printf("Sum=%.1f+%.1fi",sum.real,sum.img);

	return 0;
}

struct imgnum sumimg(struct imgnum x,struct imgnum y)
{
	struct imgnum sum;
	sum.real = x.real + y.real;
	sum.img = x.img + y.img;

	return sum;
}

