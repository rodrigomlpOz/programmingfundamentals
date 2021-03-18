/*
  Print "cough" using 3 different the 3 techniques described below . In each one of them you should print cough 3 times.
      
  1) Print 3 "coughs" using printf statements
  2) Print 3 "coughs" using a loop
  3) Print 3 "coughs" by calling a function
  
  You should see 9 "coughs" on the terminal at the end of the problem
*/



#include <stdio.h>
void cough(int x);

int main()
{
    printf("Cough\n");
    printf("Cough\n");
    printf("Cough\n");

    for (int i = 0; i < 3; i ++)
    {
        printf("Cough\n");
    }

    cough(3);
}

void cough(int x)
{
    for (int i = 0; i < 3; i ++)
    {
        printf("Cough\n");
    }
}
