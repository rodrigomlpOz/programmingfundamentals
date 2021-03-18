/* 

  Write a program in C to make such a pattern like the triangle below
  Ask the user for the number of rows
  At each row, you will print the row that you are currently at
  

  num_rows = 4
   
  1
  22
  333
  4444  
 
  num_rows = 2
  1
  22
  
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int rows = get_int("Input number of rows : ");
   for(int i = 1; i <= rows; i++)
   {
	   for(int j=1;j<=i;j++)
      {
         printf("%d",i);
      }
	  printf("\n");
   }
}
