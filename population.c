// inclue libraries used
#include <stdio.h>
#include <cs50.h>

// include main functions
int main(void)
{
    // declare variable
    int startsize;

    // do while is a loop. so ask user for an input larger than 9
    do
    {
        // promt user for start size
        startsize = get_int("What is the starting population?: ");
    }

    while (startsize < 9);

    // declare variable
    int endsize;

    // do while is a loop. ask user for an input larger than the startsize
    do
    {
        // prompt user for end size
        endsize = get_int("What is the ending population?: ");
    }

    while (endsize < startsize);

    //calculate number of years until we reach threshold
    // declare variable
    int years = 0;

    // while loop. while start is less than end calculate this equation
    while (startsize < endsize)
    {
        startsize = startsize + (startsize / 3) - (startsize / 4);
        years++;
    }

    // print number of years
    printf("Years: %i\n", years);
}