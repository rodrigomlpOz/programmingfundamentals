/* Write a C program to find the sum of the number from 1 to 10 using for loops. */

#include <stdio.h>
int main()
{
    int sum = 0;
 
    for (int j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}
