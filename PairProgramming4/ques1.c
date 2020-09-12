/* Write a C program to generate pascal's triangle
Pascal’s triangle is a triangular array of the binomial coefficients.
Write a function that takes an integer value n as input and prints
first n lines of the Pascal’s triangle. 
Following are the first 6 rows of Pascal’s Triangle.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 

*/

#include <stdio.h>

void printPascal(int);

int main()
{
   int n = 5;
	printPascal(n);
	return 0;
}

void printPascal(int n)
{
// An auxiliary array to store generated pscal triangle values
   int arr[n][n];

// Iterate through every line and print integer(s) in it
   for (int line = 0; line < n; line++)
   {
	   // Every line has number of integers equal to line number
	   for (int i = 0; i <= line; i++)
	   {
	      // First and last values in every row are 1
	      if (line == i || i == 0)
	      {
	         arr[line][i] = 1;
	      }

	      // Other values are sum of values just above and left of above
	      else
	      {
	         arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
	      }

	      printf("%d ", arr[line][i]);
	   }
	   printf("\n");
   }
}
