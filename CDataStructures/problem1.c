//Create a struct with int properties of a car. 
//Put struct in a variable called audi
//Create a pointer called ptr that points to this struct
//Print the same property using
// a) (*ptr).propertyName
// b) ptr->propertyName
// c) audi.propertyName

#include <stdio.h>

typedef struct{
        int km;
        int kph;
        int kg;
    } car;

int main(void){

    car audi = {12000, 230, 760};
    car *ptr = &audi;
    printf("%d\n", (*ptr).km);
    printf("%d\n", ptr->km);
    printf("%d\n", audi.km);
}