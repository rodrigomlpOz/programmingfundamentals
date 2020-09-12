/*Create a structure named Point with variables x and y.
 *Then create an array of Points with 10 Points
 * assign values to the array members and print it.
*/

#include <stdio.h>

// create a structure named point
typedef struct
{
   int x, y;
}Point;


int main()
{
   // Create an array of structures
   Point arr[10];

   // Access array members
   arr[0].x = 10;
   arr[0].y = 20;

   // print the array members
   printf("%d\n %d\n", arr[0].x, arr[0].y);

   return 0;
}
