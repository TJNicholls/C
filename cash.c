//include headers
#include <stdio.h>
#include <math.h>
#include <cs50.h>

//main function
int main(void)
{
    //declare all variables. float for decimal numbers and int for whole numbers.
    float dollar;
    int cents, coins = 0;

    // do while loop to prompt user for a valid input above 0.0
    do
    {
        dollar = get_float("How much changed do I owe you? ");
    }
    while (dollar <= 0);

    // convert float into int so that i can subtract in whole numbers. i.e 0.25 cents becomes 25
    cents = round(dollar * 100);

    // start subtraction of coins with biggest coin per greedy algorithm
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    // print the number of cons returned to the user/customer. using int as its a whole number
    printf("Coins: %i\n", coins);


}