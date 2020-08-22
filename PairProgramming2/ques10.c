/* Write a C program to check which number nearest to the value 100 among two
given integers. Return 0 if the two numbers are equal. */

#include <stdio.h>
#include <stdlib.h>

int test(int, int);

int main(void)
{
   printf("%d\n",test(78, 95));
   printf("%d\n",test(95, 95));
   printf("%d\n",test(99, 70));
}       
int test(int x, int y)
{
   int n = 100;
   int val = abs(x - n);
   int val2 = abs(y - n);
   if (val == val2)
   {
      return 0;
   }
   else
   {
      if (val < val2)
      {
         return x;
      }
      else
      {
         return y;
      }
   }
}
