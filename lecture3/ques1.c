/* Create a structure containing the student data such as name, id and age
 * Assign values to each structure(i.e student data) members(i.e name, id, age)
 * Finally, print each member variable
 */

#include <stdio.h>
#include <cs50.h>

// creating a structure named student data
struct StudentData{
   string stu_name;
   int stu_id;
   int stu_age;
};


int main()
{
   /* student is the variable of structure StudentData*/
   struct StudentData student;

   /*Assigning the values of each struct member here*/
   student.stu_name = "Steve";
   student.stu_id = 1234;
   student.stu_age = 30;

   /* Displaying the values of struct members */
   printf("Student Name is: %s\n", student.stu_name);
   printf("Student Id is: %d\n", student.stu_id);
   printf("Student Age is: %d\n", student.stu_age);

   return 0;
}