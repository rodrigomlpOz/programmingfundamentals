/*
	Delete the first node of Linked List
*/

#include <stdio.h>
#include <stdlib.h>

void InsertAtEnd(int data);
void PrintList();
void DeleteFirstNode();

struct Node
{

	int data;		   // data of the node
	struct Node *next; // pointer to the next node in the LinkedList
};

struct Node *head;
struct Node *tail;
int length;

int main()
{

	int num, i, data;
	head = NULL;
	tail = NULL;
	length = 0;

	printf("How many numbers of nodes?\n");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter the number to add at the end of the Linked List\n");
		scanf("%d", &data);
		InsertAtEnd(data);
	}
	printf("Linked List before Deletion\n");
	PrintList();
	DeleteFirstNode();
	printf("Linked List after Deletion\n");
	PrintList();
}

void DeleteFirstNode()
{
	// Checks if the LinkedList is Empty.
	if (head == NULL)
	{
		printf("Linked List is Empty!");
	}
	else
	{
		struct Node *currentHead = head;
		head = head->next; // Update the head to the second element in the list.

		free(currentHead); // free the previous head;

		length--; // Decrease the length of the LinkedList
		if (length == 0)
			tail = NULL; // update the tail to NULL when there is a single element in the List.
	}
}

void InsertAtEnd(int data)
{

	// Create a new Node.
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = data; // Set the data of the new node
	newNode->next = NULL; // Update the pointer to next.

	// If Linked List is empty, update the head
	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		tail->next = newNode; // set the pointer to next of previous tail to the new Node.
	}

	tail = newNode; // Update the tail to the new Node
	length++;		//Increment the Linked List length
}

void PrintList()
{

	struct Node *newNode = head;

	while (newNode != NULL)
	{
		printf("%d ", newNode->data);
		newNode = newNode->next;
	}

	printf("\n");
}
