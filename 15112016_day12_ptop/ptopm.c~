#include "ptoph.h"
int main()
{
	int *a = malloc(4 * sizeof(int));
	int *b = malloc(2 * sizeof(int));
	int *c = malloc(6 * sizeof(int));
	int *d = malloc(3 * sizeof(int*));
	int i=0;
	
	for(i=0;i<4;i++)
	{
		*(a+i) = (1+i);
	}
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		*(b+i) = (5+i);
	}
	printf("\n");
	i=0;
	
	for(i=0;i<6;i++)
	{
		*(c+i) = (7+i);
	}
	
	*(d+0) = a;
	*(d+1) = b;
	*(d+2) = c;

	printf("%d %d %d\n", *((int *)*(d+0)+2), *((int*)*(d+1)+1), *((int *)*(d+2)+2));
	
	printf("\n\n");

	ptopchf();
	printf("\n\n");
	return 0;
}



/*       printf("vallues in array a: \n\n");
	for(i=0;i<4;i++)
	{
		printf("%d\t", *((int*)*(d+i)+i));
	}                                          */           
