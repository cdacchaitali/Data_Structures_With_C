
// Circular Double Linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Test
{
	int data;
	struct Test *prev, *next;
} Node;

Node *first, *last;

Node *createNode(int);
void addAtBeg(int);
void addAtEnd(int);
void disp();
void printForward();
void printReverse();
void deleteAtData(int);
void addAtPos(int, int);

int main()
{
	first = last = NULL;
	int i;
	for (i = 0; i < 10; i += 2)
	{
		addAtBeg(100 + i);
		addAtEnd(200 + i + 1);
	}
	disp();
	///*
	deleteAtData(100);
	printf("After deleting 100\n");
	disp();
	deleteAtData(108);
	printf("After deleting 108\n");
	disp();
	deleteAtData(209);
	printf("After deleting 209\n");
	disp();
	deleteAtData(1000);
	printf("After deleting 1000\n");
	disp();
	addAtPos(300, 4);
	disp();
}

Node *createNode(int num)
{
	Node *New = (Node *)malloc(sizeof(Node));
	if (New != NULL)
	{
		New->data = num;
		New->prev = New->next = NULL;
	}
	return New;
}

void addAtPos(int num, int pos)
{
	Node *New = createNode(num);
	Node *temp = first;
	int counter = 1;
	while (temp != NULL && counter < pos - 1)
	{
		temp = temp->next;
		counter++;
	}
	New->next = temp->next;
	New->prev = temp->next->prev;
	temp->next = New;
	New->next->prev = New;
}

void addAtBeg(int num)
{
	Node *New = createNode(num);
	if (first == NULL)
	{
		first = last = New;
	}
	else
	{
		first->prev = New;
		New->next = first;
		first = New;
		first->prev = last;
		last->next = first;
	}
}

void addAtEnd(int num)
{
	Node *New = createNode(num);
	if (first == NULL)
	{
		first = last = New;
	}
	else
	{
		New->prev = last;
		last->next = New;
		last = New;
		last->next = first;
		first->prev = last;
	}
}

void disp()
{
	printf("Forward: ");
	printForward();
	printf("Reverse: ");
	printReverse();
	printf("\n-------------------------------\n");
}

void printForward()
{
	Node *temp = first;
	if (temp != NULL)
	{
		while (temp->next != first)
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		printf("%d ", temp->data);
	}
	else
	{
		printf("Empty List");
	}
	printf("\n");
}

void printReverse()
{
	Node *temp = last;

	if (temp != NULL)
	{
		while (temp->prev != last)
		{
			printf("%d ", temp->data);
			temp = temp->prev;
		}
		printf("%d ", temp->data);
	}
	else
	{
		printf("Empty List");
	}

	printf("\n");
}

void deleteAtData(int data)
{
	if (first == NULL)
	{
		printf("Nothing to delete! Returning...\n");
		return;
	}
	Node *temp = first->next;
	Node *temp_prev = first;

	while (temp != first && temp->data != data)
	{
		temp_prev = temp;
		temp = temp->next;
	}
	if (temp == first && temp->data != data)
	{
		printf("That data does not exist! Returning...\n");
		return;
	}
	else if (temp == first)
	{
		temp->next->prev = last;
		last->next = temp->next;
		first = temp->next;
		temp->next = NULL;
		temp->prev = NULL;
	}
	else if (temp == last)
	{
		temp_prev->next = first;
		first->prev = temp_prev;
		last = temp_prev;
		temp->next = NULL;
		temp->prev = NULL;
	}
	else
	{
		temp->next->prev = temp_prev;
		temp_prev->next = temp->next;
		temp->next = NULL;
		temp->prev = NULL;
	}
	free(temp);
}
