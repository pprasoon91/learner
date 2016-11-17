#include "arrayuserinputh.h"
int main()
{
	int a[10][10];
	int i, j, k, l, m, n, o;
	printf("\nenter the size of 2d array a[-][-]: ");
	scanf("a[%d][%d]", &k, &l);
	printf("\nentered size is:a[%d][%d]", k, l);
	printf("\n\n%d values can be stored in this array. ", k*l);
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("\n\nPlease enter the Numeric value at a[%d][%d]= ", i, j);
			scanf("%d", &m);
			a[i][j]=m;
		}
	}
	printf("\nBelow are the value stored in the Numeric ARRAY: \n\n");
	for(n=0;n<k;n++)
	{
		for(o=0;o<l;o++)
		{
			printf("a[%d][%d]= %d\t", n, o, a[n][o]);
		}
		printf("\n");
	}
	printf("\n\n");
	arraychar();
	return 0;		
}
