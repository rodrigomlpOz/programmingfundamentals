/*  Write a program in C to display the pattern like right angle triangle using an asterisk. 

The pattern like :

*
**
***
****

*/

#include <stdio.h>
#include <cs50.h>

int main()
{
   int i,j,rows;
   rows = get_int("Input no. of rows:\n");
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	   printf("\n");
   }
}
