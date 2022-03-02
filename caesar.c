// INCLUDE ALL LIBRARIES USED
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// ADD PROTOTYPES
char rotate(char c, int n);
int main(int argc, string argv[]) // ADD COMMAND LINE ARGUMENT
{

    if (argc != 2) // IF CL ARGUMENTS DOES NOT EQUAL 2 PRINT ERROR MESSAGE
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc == 2)
    {
        // IF CL ARGUMENTS = 2, VALIDATE THE KEY, CHECK IF KEY IS ALL DIGITS.
        int key = atoi(argv[1]); // CONVERT THE KEY AT CL FROM STRING TO INT

        bool alldigits = true;

        for (int i = 0, length = strlen(argv[1]); i < length; i++)
        {
            if (isdigit(argv[1][i]) == false) // CHECK IF ARGV 1 IS ALL DIGIT AND NO ALPHA
            {
                alldigits = false;
                return 1;
                printf("Usage: ./caesar key\n");
            }

        }
        string ciphertext = 0;
        string plaintext;

        if (alldigits) // IF ARGV 1 IS INFACT ALL DIGITS, MOVE ON AND ASK FOR USER PLAINTEXT INPUT
        {
            plaintext = get_string("plaintext:  ");
        }
        // NOW WRITE FUNCTION TO ROTATE/ ENCIPHER THE PLAINTEXT
        printf("ciphertext: ");
        int i;
        for (i = 0; i < strlen(plaintext); i++)
        {
            if (isalpha(plaintext[i]) && isupper(plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 'A') + key) % 26) + 'A');
            }
            else if (isalpha(plaintext[i]) && islower(plaintext[i]))
            {
                printf("%c", (((plaintext[i] - 'a') + key) % 26) + 'a');
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
}