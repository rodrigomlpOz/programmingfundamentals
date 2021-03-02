//create a pointer that points to an integer
//pass that pointer to function
//add one to the value that pointer points to

#include <stdio.h>

void addOne(int* ptr) {
  *ptr = *ptr + 1 // adding 1 to *ptr
}

int main()
{
  int i = 10;
  int *p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}
