/* Write a program in C to make such a pattern like right angle triangle with
  a number which will repeat a number in a row. */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int i,j,rows;

   rows = get_int("Input number of rows : ");
   for(i=1;i<=rows;i++)
   {
	   for(j=1;j<=i;j++)
	      printf("%d",i);
	   printf("\n");
   }
}
