#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i, checksum = 0;

    srand(time(NULL)); // Seed the random number generator with the current time

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; // Generate a random printable ASCII character
        checksum += password[i] ^ 14; // Calculate the checksum
    }

    password[PASSWORD_LENGTH] = '0'; // Add the null terminator to the end of the password

    // Make sure the password is valid by checking if its checksum is equal to 0xbf
    if (checksum == 0xbf)
    {
        printf("%sn", password); // Print the password
    }
    else
    {
        main(); // Generate a new password if the checksum is not valid
    }

    return 0;
}

