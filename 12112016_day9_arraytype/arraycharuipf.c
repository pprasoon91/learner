#include "arrayuserinputh.h"
void arraychar()
{
	char b[10][10];
	char m;
	int i, j, p, q, n, o;
	printf("\nenter the size of 2d array b[-][-]: ");
	scanf(" b[%d][%d]", &p, &q);
	printf("\nentered size is:a[%d][%d]", p, q);
	printf("\n\n%d values can be stored in this array. ", p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("\n\nPlease enter the Character value at b[%d][%d]= ", i, j);
			scanf(" %c", &m);
			b[i][j]=m;
		}
	}
	printf("\nBelow are the value stored in the Character ARRAY: \n\n");
	for(n=0;n<p;n++)
	{
		for(o=0;o<q;o++)
		{
			printf("a[%d][%d]= %c\t", n, o, b[n][o]);
		}
		printf("\n");
	}
	printf("\n\n");
}
