/* 


Write a program in C to make  a pattern like the triangle below. 
Ask the user for the number of rows
Print the patter below with whatever many rows the user inputted.

Example:

rows = 4
   1
   2 3
   4 5 6
   7 8 9 10

*/

#include <stdio.h>
#include <cs50.h>

int main()
{
   int k = 1;
   rows = get_int("Input number of rows :\n ");
   for(int i = 1;i <= rows;i++)
   {
	   for(int j = 1;j <= i;j++)
       {
           printf("%d ",k);
           k++;
       }
	   printf("\n");
   }
}
