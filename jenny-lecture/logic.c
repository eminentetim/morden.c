#include <stdio.h>

void main()
{
	int a = 1, b = 6, result;
	result = --a && ++b;

	printf("%d\n", result);
	printf("%d\n", a);
}
