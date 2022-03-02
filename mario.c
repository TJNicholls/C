#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // declre variable
    int height;

    //do while loop. ask for positive number
    do
    {
        height = get_int("Please provide a positive number: ");
    }

    while (height < 1 || height > 8);

    // declare variable
    int row, blocks, space;

    // for loop. repeat and add 1 under these conditions
    for (row = 0; row < height; row++)
    {
        // right align the blocks by adding spaces. equation for the correct no of spaces on each row is hight - row - 1. repeat loop under thse conditions
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // for loop. to make blocks. repeat and add 1 under these conditions
        for (blocks = 0; blocks <= row; blocks++)
        {
            printf("#");
        }
        // before moving onto the next loop print 2 spaces
        printf("  ");

        // print left aligned/ original pyramid without the spaces using for loop again
        for (blocks = 0; blocks <= row; blocks++)
        {
            printf("#");
        }
        printf("\n");
    }

}