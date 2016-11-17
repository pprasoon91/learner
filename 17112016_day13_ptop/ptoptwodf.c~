#include"ptoph.h"
void ptoptwodf()
{
	int **a=NULL;
	int i,j;
	a=malloc(2 * sizeof(int*));
	*a=malloc(3 * sizeof(int));
	*(a+1)=malloc(4 * sizeof(int));

	for(i=0;i<2;i++)
	{
		if (i==0)
		{
			for(j=0;j<3;j++)
			{
				*(*(a+i)+j)=j+1;
			}
		}
		if (i==1)
		{
			for(j=0;j<4;j++)
			{
				*(*(a+i)+j)=j+4;
			}
		}

	}
	
	for(i=0;i<2;i++)
	{
		if (i==0)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t", *(*(a+i)+j));
			}
		}
		printf("\n");
		if (i==1)
		{
			for(j=0;j<4;j++)
			{
				printf("%d\t", *(*(a+i)+j));
			}
		}
	}
}
