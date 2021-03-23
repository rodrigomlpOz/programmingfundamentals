//Ask user for integer input which will be called "change"
//Use a while loop to determine how many quarters
//will be given as "change"
// Example: 76 as changes uses 3 quarters. 29 as change uses 1 quarter.

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

