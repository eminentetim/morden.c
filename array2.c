#include <stdio.h>

/**
* main - void
* print the n number with the contain of the array
*/

int main(void)
{
	int myarr[5];
   
        myarr[0] = 10;
        myarr[1] = 20;
        myarr[2] = 30;
	myarr[3] = 40;
	myarr[4] = 50;

	for (int i = 0; i <5; i++)
        {
                 printf("myarr[%d] = %d\n", i,  myarr[i]);
        }
}

