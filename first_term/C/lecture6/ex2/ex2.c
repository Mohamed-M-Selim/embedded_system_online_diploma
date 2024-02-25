#include <stdio.h>
#include <string.h>


struct dist sumf(struct dist x,struct dist y);


struct dist{

	int feet;
	float inch;

};

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct dist n1,n2,sum;

	printf("enter information for 1st distance:\n");

	printf("Enter feet: ");
	scanf("%d",&n1.feet);
	printf("Enter inch: ");
	scanf("%f",&n1.inch);

	printf("enter information for 2nd distance:\n");

	printf("Enter feet: ");
	scanf("%d",&n2.feet);
	printf("Enter inch: ");
	scanf("%f",&n2.inch);

	sum = sumf(n1,n2);

	printf("Sum of Distances=%d'%.2f''",sum.feet,sum.inch);

	return 0;
}

struct dist sumf(struct dist x,struct dist y)
{
	struct dist sum;
	sum.feet = x.feet + y.feet;
	sum.inch = x.inch + y.inch;

	if(sum.inch >= 12)
	{
		sum.feet++;
		sum.inch = 12 - sum.inch;
	}
	return sum;
}




