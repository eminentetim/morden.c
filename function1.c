#include <stdio.h>
int add(int x,int y)
{
	return (x + y);
}

int main(void)
{
	int myresult = add (20, 40);
	printf("the  result is: %d\n", myresult);
}

