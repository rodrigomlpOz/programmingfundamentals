//Print the following sequence of number: 0 + 2 + 4 + 6 .... 98 + 100 using for loops
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 101; i+=2)
    {
        printf("%i\n", i);
    }
}