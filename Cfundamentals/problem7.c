/*
   Ask user for an integer input
   Print even if the input is even or odd if the input is odd
*/

// Calculates a remainder
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for integer
    int n = get_int("n: ");

    // Check parity of integer
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
