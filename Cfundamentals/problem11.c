//Create a function that returns the double of a number. Call the function multiple times. Print the result
#include <stdio.h>

int double_num(int x);

int main(void)
{
   int result = double_num(4);
   printf("%i\n", result);

   printf("%i\n", double_num(5));
   printf("%i\n", double_num(6));
   printf("%i\n", double_num(7));
}


int double_num(int x)
{
    return 2*x;
}