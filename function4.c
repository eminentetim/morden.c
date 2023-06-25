#include <stdio.h>
void myfunction(int *x)
{
	*x =456;
}

int main(void)
{
	int a = 100;
	printf("The value before the function call: %d\n", a);
	myfunction(&a);
	printf("The value oafter the function call: %d\n", a);
}
