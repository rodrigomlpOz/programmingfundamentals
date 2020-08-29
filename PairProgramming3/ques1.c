/* Write a program in C to store elements in an array and print it.

Test Input Data :

Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9*/

#include <stdio.h>
#include <cs50.h>

int main()
{
   int arr[10], i;
   printf("Read and Print elements of an array:\n");
   printf("-----------------------------------------\n");

   printf("Input 10 elements in the array :\n");
   for(i=0; i<10; i++)
   {
	   arr[i] = get_int("element - %d : ",i);
   }

   printf("\nElements in array are: ");
   for(i=0; i<10; i++)
   {
      printf("%d  ", arr[i]);
   }
   printf("\n");
}
