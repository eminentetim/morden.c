#include <stdio.h>
/**
initializing myarr to 6
*/
int main(void)
{
	int myarr[6] = {1, 2, 4, 5, 7, 10};
	
	for (int i =0; i < 6; i++)
	{
		printf("%d ", myarr[i]);
	}

	/* changing the value of one, two and six */

	printf("\n");

	myarr[1] = 50;
	myarr[2] = 100;
	myarr[6] = 600;

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", myarr[i]);
	}
	printf("\n");
}
