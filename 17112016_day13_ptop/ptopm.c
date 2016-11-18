#include"ptoph.h"
int main()
{
	int ***a= NULL;
	a= malloc(3 * sizeof(int*));
	*a= malloc(3 * sizeof(int*));
	*(a+1)= malloc(2 * sizeof(int*));
	*(a+2)= malloc(2 * sizeof(int*));
	*(*a)= malloc(2 * sizeof(int));                /* = {1,2}; */
	*((*a)+1)= malloc(4 * sizeof(int));            /*  = {3,4,5,6}; */
	*((*a)+2)= malloc(6 * sizeof(int));            /*  = {7,8,9,10,11,12};*/
	*(*(a+1))= malloc(2 * sizeof(int));            /*  = {13,14}; */
	*(*(a+1)+1)= malloc(1 * sizeof(int));          /*  = {15}; */
	*(*(a+2))= malloc(4 * sizeof(int));            /*  = {16,17,18,19}; */
	*(*(a+2)+1)= malloc(5 * sizeof(int));           /*  = {20,21,22,23,24}; */
	

	for(i=0;i<3;i++)
	{
		if(i==0)
		{	
			for(j=0;j<3;j++)
			{
				if(j==0)
				{	
					for(k=0;k<2;k++)
					{
						*(*(*(a))+k)=k+1;
					}
				}	
				
				if(j==1)
				{	
					for(k=0;k<4;k++)
					{
						*(*(*(a)+j)+k)=k+3;
					}
				}
				
				if(j==2)
				{	
					for(k=0;k<6;k++)
					{
						*(*(*(a)+j)+k)=k+7;
					}
				}	
			}
		}	
		
		if(i==1)
		{	
			for(j=0;j<2;j++)
			{
				if(j==0)
				{	
					for(k=0;k<2;k++)
					{
						*(*(*(a))+k)=k+13;
					}
				}	
				
				if(j==1)
				{	
					for(k=0;k<1;k++)
					{
						*(*(*(a)+j)+k)=k+15;
					}
				}
				
			}
		}	
		
		if(i==2)
		{	
			for(j=0;j<2;j++)
			{
				if(j==0)
				{	
					for(k=0;k<4;k++)
					{
						*(*(*(a))+k)=k+16;
					}
				}	
				
				if(j==1)
				{	
					for(k=0;k<5;k++)
					{
						*(*(*(a)+j)+k)=k+20;
					}
				}	
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	for(i=0;i<3;i++)
	{
		if(i==0)
		{	
			for(j=0;j<3;j++)
			{
				if(j==0)
				{	
					for(k=0;k<2;k++)
					{
						*(*(*(a))+k)=k+1;
					}
				}	
				
				if(j==1)
				{	
					for(k=0;k<4;k++)
					{
						*(*(*(a)+j)+k)=k+3;
					}
				}
				
				if(j==2)
				{	
					for(k=0;k<6;k++)
					{
						*(*(*(a)+j)+k)=k+7;
					}
				}	
			}
		}	
		
		if(i==1)
		{	
			for(j=0;j<2;j++)
			{
				if(j==0)
				{	
					for(k=0;k<2;k++)
					{
						*(*(*(a))+k)=k+13;
					}
				}	
				
				if(j==1)
				{	
					for(k=0;k<1;k++)
					{
						*(*(*(a)+j)+k)=k+15;
					}
				}
				
			}
		}	
		
		if(i==2)
		{	
			for(j=0;j<2;j++)
			{
				if(j==0)
				{	
					for(k=0;k<4;k++)
					{
						*(*(*(a))+k)=k+16;
					}
				}	
				
				if(j==1)
				{	
					for(k=0;k<5;k++)
					{
						*(*(*(a)+j)+k)=k+20;
					}
				}	
			}
		}
	}
return 0;	
}
