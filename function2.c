#include <stdio.h>

int myfunction(int x)
{
	return (x);
}

int main(void)
{
	int myint = 10;
	int myresult ;
	myresult = myfunction(myint);
	printf("One parameter function result: %d\n", myresult);
}
