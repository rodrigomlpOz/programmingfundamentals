#include <stdio.h>
#include <stdlib.h>

// Create a person struct that has as properties:
//   a) Two pointers to two other "person" structs
//   b) A char array with two elements called alleles
// Then create a person with two parents (which are also person structs). 
// Print one of the parents alleles
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
}
person;

void free_family(person *p);

int main(void){

    person *p1 = malloc(sizeof(person));
    p1->alleles[0] = 'A';
    p1->alleles[1] = 'O';
    p1->parents[0] = NULL;
    p1->parents[1] = NULL;

    person *p2 = malloc(sizeof(person));
    p2->alleles[0] = 'A';
    p2->alleles[1] = 'B';
    p2->parents[0] = NULL;
    p2->parents[1] = NULL;

    person *child = malloc(sizeof(person));
    child->alleles[0] = 'A';
    child->alleles[1] = 'A';
    child->parents[0] = p1;
    child->parents[1] = p2;

    free_family(child);
}


// Free `p` and all ancestors of `p`.
void free_family(person *p)
{
    // TODO: Handle base case
    if (p == NULL)
    {
        return;
    }
    // TODO: Free parents
    free_family(p->parents[0]);
    free_family(p->parents[1]);
    // TODO: Free child

    free(p);
}