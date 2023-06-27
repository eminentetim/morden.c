#include <stdio.h>
/* function with pointer */

int main(void)
{
	int x = 12344;
	printf("The value before the change: %d\n", x);

	int *p = &x;
	*p = 567;
	printf("The value after the change: %d\n", x);


}

