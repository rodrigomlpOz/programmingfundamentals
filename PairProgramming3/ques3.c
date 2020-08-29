/* Write a program in C to find the sum of all elements of the array.

Test Input Data :

Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8

Expected Output :
Sum of all elements stored in the array is : 15 */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int a[100], i, n, sum = 0;

	printf("\nFind sum of all elements of array:\n");
   printf("--------------------------------------\n");

   n = get_int("Input the number of elements to be stored in the array :");

   printf("Input %d elements in the array :\n",n);
   for(i = 0; i < n; i++)
   {
	   a[i] = get_int("element - %d : ", i);
	}

   for(i = 0; i < n; i++)
   {
      sum += a[i];
   }

   printf("Sum of all elements stored in the array is : %d\n\n", sum);
}
