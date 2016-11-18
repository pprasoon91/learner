#include"ptochh.h"
int main()
{
	char *a=NULL;
	char *b=NULL;
	char l;
	int size=0, i, j, sz;
	printf("\nenter the size of character array: ");
	scanf("%d", &size);
	sz=size;
	printf("\nsize of character array is: %d\n", size);
	a=malloc(size * sizeof(char));
	b=malloc(size * sizeof(char));
	for(i=0;i<size;i++)
	{
		printf("\nenter the %d character: ", i+1);
		scanf(" %c", &l);
		*(a+i)=l;	
	}
	printf("Character entered are:\n\n");
	for(i=0;i<size;i++)
	{
		printf("%c\t", *(a+i));	
	}
	
	printf("\n");
	sz=size-1;
	for(j=0;j<size;j++)
	{
		*(b+j)=*(a+sz);
		sz--;
	}
	printf("\n");
	for(j=0;j<size;j++)
	{
		printf("%c\t", *(b+j));
	}
	printf("\n");
return 0;
}
