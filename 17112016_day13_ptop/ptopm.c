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
	

	/**(*a)= {1,2};*/
	
	/*printf("\n%x %d \n", ***a, ***a);*/
	printf("\n");
	ptoptwodf();
	printf("\n");		
	return 0;	

}
