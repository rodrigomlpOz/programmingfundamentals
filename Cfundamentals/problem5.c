//Print numbers from 1 to 100 using a while loop 

#include <stdio.h>

int main(void)
{
    int counter = 0;
    while (counter <= 100)
    {
        printf("%i\n", counter);
        counter += 1;
    }
}