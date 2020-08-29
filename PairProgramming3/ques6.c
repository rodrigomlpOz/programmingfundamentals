/* Write a program in C to print all unique elements in an array.
Prompt the user to enter the elements.

Test Input Data :

Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4

Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5

Expected Output :
The unique elements found in the array are:
3 5 */

#include <stdio.h>
#include <cs50.h>

int main()
{
   int arr[100], n, count = 0, i, j, k;

   printf("\n\nPrint all unique elements of an array:\n");
   printf("---------------------------------------------------------\n");

   n = get_int("Input the number of elements to be stored in the array :");

   printf("Input %d elements in the array :\n",n);
   for(i = 0; i < n; i++)
   {
       arr[i] = get_int("element - %d : ", i);
   }

   printf("\nThe unique elements found in the array are: \n");

   for (i = 0; i < n; i++)
   {
      count = 0;
      for (j = 0, k = n; j < k + 1; j++)
      {
         /*Increment the counter when the seaarch value is duplicate.*/
         if (i != j)
         {
            if (arr[i] == arr[j])
            {
                count++;
            }
         }
      }
      if(count == 0)
      {
          printf("%d ",arr[i]);
      }
   }
   printf("\n");

}
