#include "ptoph.h"
void ptopchf()
{
	char *a = malloc(4 * sizeof(char));
	char *b = malloc(2 * sizeof(char));
	char *c = malloc(6 * sizeof(char));
	char **d = malloc(3 * sizeof(void *));
	char i=0;
	bzero(d, 3*(sizeof(char*)));
	for(i=0;i<4;i++)
	{
		*(a+i) = i+0x61;
	}
	
	
	for(i=0;i<2;i++)
	{
		*(b+i) = (i+0x65);
	}
	
	
	for(i=0;i<6;i++)
	{
		*(c+i) = (i+0x67);
	}
	
	*(d) = (char*)a;
	*(d+1) = (char*)b;
	*(d+2) = (char*)c;

	printf("%c %c %c\n", *((char *)*(d)+2), *((char*)*(d+1)+1), *((char *)*(d+2)+2));
}

