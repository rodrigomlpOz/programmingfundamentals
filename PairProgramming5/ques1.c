/**Write a program in C to add two numbers using pointers.
 * 
    Test Data :
    Input the first number : 5
    Input the second number : 6
    Expected Output :

    The sum of the entered numbers is : 11
 * **/

#include <stdio.h>
int main()
{
   int fno, sno, *ptr, *qtr, sum;

   printf("\n\n Pointer : Add two numbers :\n");
   printf("--------------------------------\n");

   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno);

   ptr = &fno;
   qtr = &sno;

   sum = *ptr + *qtr;

   printf(" The sum of the entered numbers is : %d\n\n",sum);

   return 0;
}