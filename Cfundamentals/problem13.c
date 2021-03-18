/* 

   Write a C program that accepts two integers and return 
   true if:
     a) either one of them is 5 
     b) or if their sum is 5
     c) or if their difference is 5.
   otherwise, return False
   Call the function with different inputs and print the results
   
 */

#include <stdio.h>
#include <stdlib.h>

int test(int, int);
int main(void)
{
   printf("%d\n",test(5, 4));
   printf("%d\n",test(4, 3));
   printf("%d\n",test(1, 4));
}   
    
int test(int x, int y)
{
   return x == 5 || y == 5 || x + y == 5 || abs(x - y) == 5;
}

