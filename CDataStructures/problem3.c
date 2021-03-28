//Print the values of the nodes in a linked list

#include <stdio.h>
#include <stdlib.h>

// Represents a node
typedef struct node
{
    int number;
    struct node *next;
}
node;


int main(void)
{
    // List of size 0, initially not pointing to anything
    node *list = NULL;

    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    // We create our first node, store the value 1 in it, and leave the next
    // pointer to point to nothing. Then, our list variable can point to it.
    list = n;

    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    // Now, we go our first node that list points to, and sets the next pointer
    // on it to point to our new node, adding it to the end of the list:
    list->next = n;

    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    // We can follow multiple nodes with this syntax, using the next pointer
    // over and over, to add our third new node to the end of the list:
    list->next->next = n;

    node * temp = list;
    while (temp != NULL)
    {
        printf("%d\n", temp->number);
        temp = temp->next;
    }

}
