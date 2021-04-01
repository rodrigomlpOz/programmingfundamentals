/*Implement bubblesort with an array of 6 elements*/

#include <stdio.h>
#include <cs50.h>

int main()
{
  int array[6] = {5, 4, 2, 1, 10, 3};

  for (int i = 0 ; i < 5; i++)
  {
    for (int j = 0 ; j < 6 - i - 1; j++)
    {
      if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
      {
        int swap = array[j];
        array[j] = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (int i = 0; i < 6; i++)
     printf("%d\n", array[i]);

  return 0;
}