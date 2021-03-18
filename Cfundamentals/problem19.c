/*
    Ask the user for an integer input
    Create a function that sums every other digit of this integer
    Return the result and print it

*/

#include <stdio.h>
#include <cs50.h>

int sum_every_other_digit(long card_num);

int main()
{
    int num = get_int("What's your number? \n");
    int num_digits = sum_every_other_digit(num);
    printf("Your number has %d digita\n", num_digits);
}


int sum_every_other_digit(long card_num)
{
    int isAlternateDigit = false;
    int sum = 0;
    while (card_num > 0)
    {
        if (isAlternateDigit)
        {
            sum += (card_num % 10)
        }
        isAlternateDigit = !isAlternateDigit;
        card_num /= 10;
    }
    return sum;
}
