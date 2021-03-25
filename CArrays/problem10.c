/*
  Cryptography is the art of scrambling, or hiding information. 
  One way of doing that is to add a number to the ASCII value to 
  letters of a string
  
  Example:

  ORIGINAL
  String:  I  L  O  V  E  Y  O U
  ASCII:  73 76 79 86 69 89 79 85
   
Adding +1

  AFTER CRYPTOGRAPHY        
ASCII     74 77 80 87 70 90 80 86
STRING    J  M  P  W  F  Z  P  V

  Store the variable ILOVEYOU in a string
  Add 1 to each letter
  Print the encrypted message (JMPWFZPV)
*/
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
int main(void)
{
    string s = "ILOVEYOU";
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i] + 1);
    }
}