// Abstract : Linkedlist create node & add at end

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
void addAtEnd();
void disp();

int main()
{
	addAtEnd();
	addAtEnd();
	addAtEnd();
	disp();
	addAtEnd();
	addAtEnd();
	disp();
}

void addAtEnd()
{
	Node *New = createNode();
	if (first == NULL)
		first = New;
	else
	{
		Node *temp = first;
		while (temp->m != NULL)
			temp = temp->m;
		temp->m = New;
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
