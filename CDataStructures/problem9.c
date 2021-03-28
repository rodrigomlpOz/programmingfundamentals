//Create an array of 5 pointers 
//The pointers point to a LinkedList Node
//Create a new node
//Make the pointer at index 0 point to the new node
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
    node *temp = malloc(sizeof(node));

    //Set next field of temp to NULL
    temp->next = NULL;

    //Set pointer at 0 to node
    table[0] = temp;
}