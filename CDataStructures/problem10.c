//Create an array of 5 pointers 
//The pointers point to a LinkedList Node
//Create a new node
//Make the pointer at index 0 point to this  new node
//Create a second new node
//Add this second node at index 0 as well (before node you created previously)
#include <stdlib.h>
#include <stdio.h>



// Represents a node in a hash table
typedef struct node
{
    int x;
    struct node *next;
}
node;

int main(void)
{
    // Hash table
    node *table[5];

    //Create space for a node
    node *temp1 = malloc(sizeof(node));

    //Set next field of temp to NULL
    temp1->next = NULL;

    //Set pointer at 0 to node
    table[0] = temp1;

    node *temp2 = malloc(sizeof(node));

    temp2->next = temp1;
    table[0] = temp2;
}
