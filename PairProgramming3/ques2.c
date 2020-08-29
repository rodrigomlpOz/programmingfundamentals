/* Write a program in C to read n number of values
   in an array and display it in reverse order. The program should prompt
   the user to enter the no. of elements and store it in a variable named n.

Test Input Data :

Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2 */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int i, n, a[100];

   printf("\nRead n number of values in an array and display it in reverse order:\n");
   printf("------------------------------------------------------------------------\n");

   n = get_int("Input the number of elements to store in the array :");

   printf("Input %d number of elements in the array :\n",n);
   for (i = 0; i < n; i++)
   {
	   a[i] = get_int("element - %d : ", i);
   }

   printf("\nThe values stored into the array are : \n");
   for(i = 0; i < n; i++)
   {
	   printf("% 5d", a[i]);
   }

   printf("\n\nThe values stored into the array in reverse are :\n");
   for(i = n-1; i >= 0;i--)
   {
	   printf("% 5d", a[i]);
   }
   printf("\n\n");
}
