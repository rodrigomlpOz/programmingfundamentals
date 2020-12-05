/*   Write a program in C to create a singly linked list and count the number of nodes.
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct node {
   int val;
   struct node * next;
} node_t;


void displayList();         // function to display the list

int main()
{
   node_t * head = NULL;
   head = malloc(sizeof(node_t));
   head->val = 1;
   head->next = malloc(sizeof(node_t));
   head->next->val = 2;
   head->next->next = malloc(sizeof(node_t));
   head->next->next->val = 3;
   head->next->next->next = malloc(sizeof(node_t));
   head->next->next->next->val = 4;
   head->next->next->next->next =NULL;

   displayList(head);

}

void displayList(struct node* head)
{
    struct node *tmp;
    int count = 0;
    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->val);       // prints the data of current node
            count += 1;
            tmp = tmp->next;                     // advances the position of current node
        }
        printf("The no. of nodes are: %d\n", count);
    }
}