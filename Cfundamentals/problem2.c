//Print "cough" in 3 ways
//First using 3 printf statements
// Then using a loop
// then using a function

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
