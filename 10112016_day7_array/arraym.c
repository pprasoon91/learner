#include<stdio.h>

int main()
{
	int a[5] = {10, 11, 12, 13, 14};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	int b=0;
	printf("\n\nEnter the array 'a[ ]' location to get the value: ");
	scanf("%d", &b);
	printf("\n\nThe value at a[%d] is: %d\n\n", b, c[b]);
	printf("\n\nThe value at c[%d] is: %d\n\n", b, c[b]);
	return 0;


	
}



