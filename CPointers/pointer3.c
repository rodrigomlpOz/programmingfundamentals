//Print addresses of an array of 4 elements 

#include <stdio.h>
int main() {
   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("%p", &x[i]);
   }

   printf("Address of array x: %p", x);

   return 0;
}