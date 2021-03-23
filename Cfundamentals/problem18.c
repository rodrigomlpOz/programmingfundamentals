<<<<<<< HEAD
//Ask user for integer input which will be called "change"
//Use a while loop to determine how many quarters
//will be given as "change"
=======
/*
Ask the user for an integer
Create a function that calculates the number of digits for this integer
Return the result and print it
*/
>>>>>>> 130f6df083115aa8f0f8259e073d8d112afb92d9

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's your change?\n");
    int count_of_quarters = 0;
    while (x >= 25)
    {
        x -= 25;
        count_of_quarters += 1;
    }
    printf("%d\n", count_of_quarters);
}

