/* Write a C program to find the sum of the number from 1 to 10 using for loops. */

#include <stdio.h>
void main()
{
    int sum = 0;

    printf("The first 10 natural number is :\n");
 
    for (int j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}
