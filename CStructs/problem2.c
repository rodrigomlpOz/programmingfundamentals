//Create an array of student structs (same from problem1)
//Initialize each one of them
//Print the name and student_id of one of them
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
    student students[3];

    students[0].name = "RODRIGO";
    students[0].student_id = 4;

    students[1].name = "ELLA";
    students[1].student_id = 5;

    students[2].name = "MARLENE";
    students[2].student_id = 6;

    printf("%d\n", students[0].student_id);
    printf("%s\n", students[2].name);
}
