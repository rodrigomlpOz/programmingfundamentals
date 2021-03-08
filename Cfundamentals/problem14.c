/*
Loop through values from 1 to 50 inclusive
If the current number is divisible by 3, print Fizz
If the current number is divisible by 5, print Buzz
If the current number is divisible by both 3 and 5, print FizzBuzz
Else, print the number
*/

#include <stdio.h>

int main() {

    for (int i = 0; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("Fizzbuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}