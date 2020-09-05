/* Write a program in C to count a total number of duplicate elements in an array.
Prompt the user to enter the elements.

Test Input Data :

Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1

Expected Output :
Total number of duplicate elements found in the array is : 1 */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int arr[100], n,count = 0, i, j;

   printf("\n\nCount total number of duplicate elements in an array:\n");
   printf("---------------------------------------------------------\n");

   n = get_int("Input the number of elements to be stored in the array :");

   printf("Input %d elements in the array :\n",n);
   for(i = 0; i < n; i++)
   {
       arr[i] = get_int("element - %d : ", i);
   }

   /*
    * Find all duplicate elements in array
    */
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         /* If duplicate found then increment count by 1 */
         if(arr[i] == arr[j])
         {
            count++;
            break;
         }
      }
   }

   printf("\nTotal number of duplicate elements found in array = %d\n", count);
}
