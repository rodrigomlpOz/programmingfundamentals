//Create a function that swaps two integers
//Swap by first passes the addresses of the integers
//Them swap them pack by passing as arguments pointers to the integers

#include <stdio.h>

void swap(int *x, int *y);

int main() {
  int a = 3;
  int b = 4;
  swap(&a, &b);
  printf("First swap");
  printf("%d\n", a);
  printf("%d\n", b);

  int *r = &a;
  int *s = &b;
  swap(r, s);
  printf("Swap back");
  printf("%d\n", a);
  printf("%d\n", b);
}

void swap(int *x, int *y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
}