/* Write a program in C to copy the elements of one array into another array.

Test Input Data :

Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12

Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12 */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int arr1[100], arr2[100], i, n;

    printf("\nCopy the elements one array into another array :\n");
    printf("----------------------------------------------------\n");

   n = get_int("Input the number of elements to be stored in the array :");

   printf("Input %d elements in the array :\n",n);
   for(i = 0; i < n; i++)
   {
	   arr1[i] = get_int("element - %d : ", i);
	}
   /* Copy elements of first array into second array.*/
   for(i = 0; i < n; i++)
   {
      arr2[i] = arr1[i];
   }

   /* Prints the elements of first array   */
   printf("\nThe elements stored in the first array are :\n");
   for(i = 0; i < n; i++)
   {
      printf("% 5d", arr1[i]);
   }

   /* Prints the elements copied into the second array. */
   printf("\n\nThe elements copied into the second array are :\n");
   for(i = 0; i < n; i++)
   {
      printf("% 5d", arr2[i]);
   }
	printf("\n");
}
