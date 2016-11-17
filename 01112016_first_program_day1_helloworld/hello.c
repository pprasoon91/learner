#include "abc.h"

int main()

{
	int a, b, c;
	float area_c, area_s, r = 4;

	a = 10;
	b = 6;

	c = add(a, b);
	printf("Add: %d\n",c);
	
	c = sub(a, b);
	printf("Add: %d\n",c);

	c = mul(a, b);
	printf("Add: %d\n",c);

	area_c = area_circle (r);
	printf("area of circ= %f\n", area_c);

	area_s = area_square (r);
	printf("area of square= %f\n", area_s);
	
	return 0;
}

