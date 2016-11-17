#include "calch.h"

int main()
{
	double a, b;
	printf("\n\nInput the value for a and press enter: ");
	scanf("%lf", &a);
	printf("Input the value for b and press enter: ");
	scanf("%lf", &b);
	printf("\na+b = %lf\n", add(a, b));
	printf("\na-b = %lf\n", sub(a, b));
	printf("\na*b = %lf\n", mul(a, b));
	printf("\na/b = %lf\n", div(a, b));
	printf("\na MOD b = %d\n", mod(a, b));
	printf("\nsquare root of a = %lf\n", sqrta(a));
	printf("\nsquare root of b = %lf\n\n\n\n", sqrtb(b));
	return 0;
}
