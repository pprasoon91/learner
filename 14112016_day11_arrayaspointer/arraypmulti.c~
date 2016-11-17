#include "arrayph.h"
void arraypmulti()
{
	int *a = malloc(4 * sizeof(int));
	int *b = malloc(2 * sizeof(int));
	int *c = malloc(6 * sizeof(int));
	int *d = malloc(3 * sizeof(int*));
	int i;
	for(i=0;i<4;i++)
	{
		*(a+i) = i+1;	
	}
	for(i=0;i<2;i++)
	{
		*(b+i) = i+5;	
	}
	for(i=0;i<6;i++)
	{
		*(c+i) = i+7;	
	}
	
	*(d+0) = a;
	*(d+1) = b;
	*(d+2) = c;

	printf("%d %d %d\n", *((int *)*d+2), d+, *((int *)*d+2)+2);
	
	
}
