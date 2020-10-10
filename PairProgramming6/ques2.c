/*
	Insert a new node at the end of a Singly Linked List
*/

#include <stdio.h>
#include <stdlib.h>

void InsertAtEnd(int data);
void PrintList();

struct Node
{

	int data;
	struct Node *next;
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

	PrintList();
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
