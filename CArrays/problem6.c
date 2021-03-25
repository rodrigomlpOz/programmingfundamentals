/*
    Ask user for their name
    Print every single ASCII number of letters in their name
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  \n");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%i", s[i]);
    }
    printf("\n");
}