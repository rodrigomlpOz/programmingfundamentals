/*
  Print "cough" 3 times in 3 ways. The output should look like
      
  1) First using 3 printf statements
  2) Then using a loop
  3) By calling a function
  
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
