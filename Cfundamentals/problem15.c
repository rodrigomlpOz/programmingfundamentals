/*  

 Write a program in C to display the pyramid-like pattern below. 
 Ask the user for the number of rows
 Print the patter with a any value of row


The pattern like :

row = 4    
*
**
***
****

row = 2
*
**

row = 6
*
**
***
****
*****
******
*/

#include <stdio.h>
#include <cs50.h>

int main()
{
   int rows = get_int("Input no. of rows:\n");
   for(int i=1;i<=rows;i++)
   {
      for(int j=1;j<=i;j++)
       {
           printf("*\n");
       }
   }
}
