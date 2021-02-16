/* Write a program in C to make such a pattern like right angle triangle with number increased by 1. 

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10

*/

#include <stdio.h>
#include <cs50.h>

int main()
{
   int k=1;
   rows = get_int("Input number of rows :\n ");
   for(int i=1;i<=rows;i++)
   {
	   for(int j=1;j<=i;j++)
       {
           printf("%d ",k);
           k++;
       }
	   printf("\n");
   }
}
