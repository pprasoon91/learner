#include "sbnhedder.h"

int main()
{
	float a=0, b=0, c=0, d=0;
	a=77.6;
	b=68.9;
	c=45.4;

	d = checksmall (a, b, c);
	printf("smallest number is: %f\n\n\n", d);
	

	d = checkbig (a, b, c);
	printf("biggest number is: %f\n\n\n", d);

	return 0;
	
}
	
