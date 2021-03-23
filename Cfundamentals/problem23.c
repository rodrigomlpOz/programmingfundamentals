/* Write a C program that accept two integers and return 
true if either one is 5 or their sum or difference is 5.*/

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

