//Create a struct called student with two properties
//name and student_id
//Initialize those properties
//Print them

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int student_id;
}
student;

int main(void)
{
    student p1;
    p1.name = "RODRIGO";
    p1.student_id = 4;

    printf("%d\n", p1.student_id);
    printf("%s\n", p1.name);
}
