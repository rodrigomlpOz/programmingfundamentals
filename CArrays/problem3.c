/*
Create an array with 10 elements
Calculate the average of them
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
    float average = (float) sum / 10;
    printf("%0.2f\n", average);
}