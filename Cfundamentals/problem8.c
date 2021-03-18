/*
   Ask user for an integer input which will be our stored in a variable called "change"
   Use a while loop to determine how many quarters will be given as "change"
   
   Example:
   
   If the change is 72, we return 3 quarters
   If the change is 25 we return 2 quarters
   If the change is 32 we return 2 quarters
   If the change is 11 we return 0 quarters
*/

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

