//Create an integer
//Grab the address of the integer and dereference it (you should see a integer)

#include <stdio.h>
int main()
{
   int num = 5;
   printf("%d\n", *&num);
}