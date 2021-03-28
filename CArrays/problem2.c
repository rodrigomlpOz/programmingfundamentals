/*
Create an array with 10 elements
Sum the value of all elements in the array
Print the result
*/

#include <stdio.h>

int main(void)
{
    int a[10] = {8, 4, 2, 1, 4, 9, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("%d\n", sum);
}
