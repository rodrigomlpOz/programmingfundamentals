/* Write a C program to find the larger from two given integers.
However if the two integers have the same remainder when
divided by 5, then the return the smaller integer.
If the two integers are the same, return 0.
*/

#include <stdio.h>

int test(int, int);
int main(void)
{    
   printf("%d\n",test(11, 21));
   printf("%d\n",test(11, 20));
   printf("%d\n",test(10, 10));
}       
int test(int x, int y)
{
   if (x == y)
   {
      return 0;
   }
   else if ((x % 5 == y % 5 && x < y) || x > y)
   {
      return x;
   }
   else
   {
      return y;
   }
}


