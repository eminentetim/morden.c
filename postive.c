#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is void
 * Return: 0 for success
 */
int main(void)
{
        int n, last_digit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        last_digit = n % 10;
        printf("Last digit of %d is ", n);
        if (last_digit > 5)
        {
                printf("%d and is greater than 5n", last_digit);
        }
        else if (last_digit == 0)
        {
                printf("%d and is 0n", last_digit);
        }
        else
        {
                printf("%d and is less than 6 and not 0n", last_digit);
        }
        return (0);
}

