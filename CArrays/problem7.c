/*
    Ask user for their name with all letters in lowercase
    Print how far each letter is from 'a' in ASCII table
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  \n");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%i", s[i] - 'a');
    }
    printf("\n");
}
