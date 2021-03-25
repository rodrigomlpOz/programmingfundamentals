/*
Create an array with 10 elements
Print the elements of the array
*/
#include <stdio.h>

int main(void)
{
    int a[10] = {8, 4, 2, 1, 4, 9, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}