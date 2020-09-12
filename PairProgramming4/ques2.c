/* Write a C program to check whether given square matrix is a Toeplitz matrix or not.
A Toeplitz (or diagonal-constant) matrix is a matrix in which each descending diagonal
from left to right is constant, i.e., all elements in a diagonal are same.

Examples :

Input: mat[N][N] = {{ 6, 7, 8},
                    { 4, 6, 7},
                    { 1, 4, 6}},
Output : True;
Values in all diagonals are same.

Input: mat[N][N] = {{ 6, 7, 8, 9 },
                    { 4, 6, 7, 8 },
                    { 1, 4, 6, 7 },
                    { 0, 1, 4, 6 },
                    { 2, 0, 1, 4 }};
Output : True;

Input: mat[N][N] = {{ 6, 3, 8},
                    { 4, 9, 7},
                    { 1, 4, 6}},
Output : False;


*/

#include <stdio.h>
#include <cs50.h>

#define N 5
#define M 4


/* Function to check if all elements present in descending diagonal starting from position
  (i, j) in the matrix are all same or not */

bool checkDiagonal(int mat[N][M], int i, int j)
{
	int res = mat[i][j];
	while (++i < N && ++j < M)
	{
		// mismatch found
		if (mat[i][j] != res)
		{
		   return false;
		}

	}

	// we only reach here when all elements in given diagonal are same
	return true;
}

// Function to check whether given matrix is a Toeplitz matrix or not
bool isToepliz(int mat[N][M])
{
	// do for each element in first row
	for (int i = 0; i < M; i++)
	{
		// check descending diagonal starting from position (0, j) in the matrix
		if (!checkDiagonal(mat, 0, i))
		{
		   return false;
		}

	}

	// do for each element in first column
	for (int i = 1; i < N; i++)
	{
		// check descending diagonal starting from position (i, 0) in the matrix
		if (!checkDiagonal(mat, i, 0))
		{
		   return false;
		}

	}

	// we only reach here when each descending diagonal from left to right is same
	return true;
}


int main()
{
	int mat[N][M] =
	{
		{ 6, 7, 8, 9 },
		{ 4, 6, 7, 8 },
		{ 1, 4, 6, 7 },
		{ 0, 1, 4, 6 },
		{ 2, 0, 1, 4 }
	};

	if (isToepliz(mat))
	{
	   printf("Matrix is a Toepliz\n ");
	}
	else
	{
	   printf("Matrix is not a Toepliz\n ");
	}
	return 0;
}

