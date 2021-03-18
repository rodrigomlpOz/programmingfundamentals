//Grab the first 2 digits of 23032234 and print it
#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 23032234;
    //Option 1
    int first_two_digits1 = 23032234 / 1000000;
    printf("%d\n", first_two_digits1);
    //Better option
    int first_two_digits2 = 23032234 / pow(10, 6);
    printf("%d\n", first_two_digits2);
}

