#include "swap.h"
int main()
{
	int a=7, b=98, z=0, w=0;
	printf("\ninput the value of x and press enter: ");
	scanf("%d", &a);
	printf("\ninput the value of y and press enter: ");
	scanf("%d", &b);
	z = swap(a, b);
	printf("\n\nValue of x is: %d\n", z);
	w = ret(a);
	printf("\nValue of y is: %d\n\n", w);
	return 0;
}

