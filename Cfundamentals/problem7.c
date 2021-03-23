
//Print numbers from 100 to 0 (backwards) using while loops
#include <stdio.h>

int main(void)
{
    int counter = 100;
    while (counter >= 0)
    {
        printf("%i\n", counter);
        counter -= 1;
    }
}
