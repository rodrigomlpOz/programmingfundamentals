//Create an integer
//Create a pointer to the integer
//Print the address of the pointer
//Print the address of the integer (using the pointer)
//Print the value of the integer (using the pointer)

#include <stdio.h>
int main() {
   int num = 5;
   int *ptr = &num;

   printf("%p\n", &ptr);
   printf("%p\n", ptr);
   printf("%d\n", *ptr);
}