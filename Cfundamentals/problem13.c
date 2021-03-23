/*
a) Ask user for two integer inputs
b) Write a C function to return the sum of the two given integer values but
if the two values are the same, then return triple their sum.
c) Print the result
*/

#include <stdio.h>
#include <cs50.h>

int test(int x, int y);

int main(void)
{
    int a = get_int("What is the first number?\n");
    int b = get_int("What is the second number?\n");

    int result = test(a, b);
    printf("The result is %d\n", result);
}

int test(int x, int y)
{
    if (x == y)
    {
        return 3*(x+y);
    }
    else
    {
        return x + y;
    }
}
