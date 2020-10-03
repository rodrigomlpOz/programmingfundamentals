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

//Example tests, uncomment out one of the 3 following tests. 
// #define exampleRows 3
// #define exampleCols 3
// #define example {{ 6, 7, 8}, { 4, 6, 7}, { 1, 4, 6}}
//#define exampleRows 5
//#define exampleCols 4
//#define example {{ 6, 7, 8, 9 }, { 4, 6, 7, 8 },{ 1, 4, 6, 7 },{ 0, 1, 4, 6 }, { 2, 0, 1, 4 }}
//#define exampleRows 3
//#define exampleCols 3
//#define example {{ 6, 3, 8},{ 4, 9, 7},{ 1, 4, 6}}

bool checkMatrix (int mat[exampleRows][exampleCols], int rowSize, int colSize);
int main(void)
{
    //initiallize testing variables from definiations above. 
    int mat[exampleRows][exampleCols] = example;
    int Rows = exampleRows;
    int Cols = exampleCols;
    bool result = checkMatrix(mat, Rows, Cols);
    printf("%s\n", result ? "true" : "false");
}
bool checkMatrix (int mat[exampleRows][exampleCols], int rowSize, int colSize)
{
    //Dont need to check the first row or column
    for (int currentRow = 1; currentRow < rowSize; currentRow++)
    {
        for (int currentCol = 1; currentCol < colSize; currentCol++)
        {
            if (mat[currentRow][currentCol] != mat[currentRow - 1][currentCol - 1])
            {
                return false;
            }
        }
    }
    return true;
}