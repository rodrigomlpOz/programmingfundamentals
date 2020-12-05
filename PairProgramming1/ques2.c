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
   int rows = get_int("Input no. of rows:\n");
   for(int i=1;i<=rows;i++)
   {
	for(int j=1;j<=i;j++)
	   printf("*");
	   printf("\n");
   }
}
