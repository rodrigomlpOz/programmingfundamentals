
//Print the following sequence of number: 0 + 2 + 4 + 6 .... 98 + 100 using while loops
#include <stdio.h>

int main(void)
{
    int counter = 0;
    while (counter <= 100)
    {
        printf("%i\n", counter);
        counter += 2;
    }
}
