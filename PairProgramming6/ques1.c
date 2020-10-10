/* 
	Insert a new node at the beginning of a Linked List
*/

#include <stdio.h>
#include <stdlib.h>

void InsertAtBegin(int data);
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

		printf("Enter the number to add at the beginning of the Linked List\n");
		scanf("%d", &data);
		InsertAtBegin(data);
	}

	PrintList();
}

void InsertAtBegin(int data)
{

	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = head;

	if (head == NULL)
	{
		tail = newNode;
	}

	head = newNode;
	length++;
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
