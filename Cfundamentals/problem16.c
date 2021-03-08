/* Write a program in C to make such a pattern like right angle triangle with
  a number which will repeat a number in a row. 
  
The pattern like :

 1
 22
 333
 4444  
  
  */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int rows = get_int("Input number of rows : ");
   for(int i=1;i<=rows;i++)
   {
	   for(int j=1;j<=i;j++)
      {
         printf("%d",i);
      }
	  printf("\n");
   }
}
