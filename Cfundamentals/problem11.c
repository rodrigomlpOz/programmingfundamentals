/* Write a C program to check if two given 
integers have the same last digit. */

#include <stdio.h>
#include <stdlib.h>

int test(int, int);

int main(void)
{
   printf("%d\n",test(123, 456));
   printf("%d\n",test(12, 512));
   printf("%d\n",test(7, 87));
   printf("%d\n",test(12, 45));

}       
int test(int x, int y)
{
   return abs(x % 10) == abs(y % 10);
}

