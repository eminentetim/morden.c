#include <stdio.h>

int myfunction(int a)
{
	if (a < 0)
	{
		return (-1);
	}
	if (a = 0)
	{
		return (0);
	}
}
int main(void)
{
	int x;
	x = myfunction(0);
printf("The function return the value of: %d\n", x);
}
