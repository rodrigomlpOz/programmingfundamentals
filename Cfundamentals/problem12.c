/* 
  Write a C program to compute the sum of the two integer inputs.
  However, if the sum is in the range 10..20 inclusive return 30 instead.
  Call the function with multiple inputs and print the results.
  
*/

#include <stdio.h>

int test(int, int);
int main(void)
{
   printf("%d\n",test(12, 17));
   printf("%d\n",test(2, 17));
   printf("%d\n",test(22, 17));
   printf("%d\n",test(20, 0));
}   
    
int test(int a, int b)
{
   if (a + b >= 10 && a + b <= 20)
   {
      return 30;
   }
   else
   {
      return a + b;
   }
}

