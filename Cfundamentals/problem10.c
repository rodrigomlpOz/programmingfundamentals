//Create a function that prints Hello as many times as you want
#include <stdio.h>

void say_hello(int x);

int main(void)
{
    say_hello(4);
}

void say_hello(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("Hello\n");
    }
}