
// Linkedlist create node & add at beginning

#include <stdio.h>
#include <stdlib.h>

struct members
{
	int id;
	char name[100];
	double rent;

	struct members *m;
};

typedef struct members Node;

Node *first = NULL;

Node *createNode();
void addAtBeg();
void disp();

int main()
{
	addAtBeg();
	addAtBeg();
	addAtBeg();
	disp();
	addAtBeg();
	addAtBeg();
	disp();
}

void addAtBeg()
{
	Node *New = createNode();
	if (first == NULL)
		first = New;
	else
	{
		New->m = first;
		first = New;
	}
}

void disp()
{
	Node *temp = first;
	while (temp != NULL)
	{
		printf("Id = %d, Name = %s, Rent = %.2lf\n", temp->id, temp->name, temp->rent);
		temp = temp->m;
	}
}

Node *createNode()
{
	Node *ptr = malloc(sizeof(struct members));
	if (ptr != NULL)
	{
		printf("Enter id,name,rent\n");
		scanf("%d,%[^,],%lf", &ptr->id, ptr->name, &ptr->rent);
		ptr->m = NULL;
	}
	return ptr;
}
