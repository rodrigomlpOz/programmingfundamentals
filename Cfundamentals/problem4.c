#include <stdio.h>
#include <cs50.h>

/*
a) Ask user for two integer inputs
b) Write a C function that returns true 
if one of the inputs is 30 or if the sum of the inputs is 30. Return false otherwise.
c) Print the result
*/

int test(int x, int y);

int main(void){
    int a = get_int("What is the first number?\n");
    int b = get_int("What is the second number?\n");

    int result = test(a, b);
    printf("The result is %d\n", result);
}
int test(int x, int y)
{
    return x == 30 || y == 30 || (x + y == 30);
}
