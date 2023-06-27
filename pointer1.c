#include <stdio.h>

int main(void)
{
	char c = 'E';
	int x = 123;
	float f = 465.343f;

	char *mycharp = &c;
	int *myintp = &x;
	float *myfloat = &f;

	printf("The value of a pointed to char: %c\n", *mycharp);
	printf("The value of a pointed to int: %d\n", *myintp);
	printf("The value of a pointed to float: %.3f\n", *myfloat);
}
