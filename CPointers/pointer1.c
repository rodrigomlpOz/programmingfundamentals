//create a pointer to an integer

//print address where integer is stored
//print value of integer

//print address that pointer stores
//print value that pointer points to using dereferencing

//prints address of pointer

#include <stdio.h>
int main()
{
   int* pc, c;

   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22

   pc = &c;
   printf("Address pointer pc points to: %p\n", pc);
   printf("Content of variable pointer points to: %d\n\n", *pc); // 22

   printf("Address of pointer: %p\n\n", &pc); // 2
   return 0;
}