/*

 Ask user for an integer. Call a function that sums
 every other digit of this number. Print the result
*/

#include <stdio.h>
#include <cs50.h>

int sum_every_other_digit(long card_num);

int main()
{
    int num = get_int("What's your number? \n");
    int num_digits = sum_every_other_digit(num);
    printf("Sum of every other digit is %d\n", num_digits);
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