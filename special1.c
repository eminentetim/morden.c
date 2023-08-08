#include <stdio.h>

int main()
{
	int a = 8, b;

	b = (a++ , ++a, a>>2);
	b = a++ , ++a;

	printf("%d\n", b);

}
