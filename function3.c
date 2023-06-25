#include <stdio.h>
void myfunction(int x)
{
	 x = 300;
}
int main(void)
{
	int a = 200;	
	printf("The value before the function is called: %d\n", a);
	myfunction(a);
	printf("The value after the function is called: %d\n", a); 
}
