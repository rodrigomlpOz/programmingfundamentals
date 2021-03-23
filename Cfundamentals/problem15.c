//Sum the numbers from 1 to 10. Print the result.

#include <stdio.h>
int main()
{
    int sum = 0;
 
    for (int j = 1; j <= 10; j++)
    {
        sum = sum + j;  
    }
    printf("\nThe Sum is : %d\n", sum);
}
