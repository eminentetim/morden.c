#include <stdio.h>

int main(void)
{
	int letters = 'a';

	while (letters != 'z' + 1 )
	{
		for (int c = 0; c < 100; c++)
		{
			putchar(letters);
		}
		printf("%c\n", letters);
		letters++;

		
	}
	printf("\n");
	return 0;

}
