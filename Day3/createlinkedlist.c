
// Linkedlist create node

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

Node *createNode();

int main()
{
	Node *mem = createNode();
}

Node *createNode()
{
	Node *ptr = malloc(sizeof(struct members));
	if (ptr != NULL)
	{
		printf("Enter id,name,rent\n");
		scanf("%d,%[^,],%lf", &ptr->id, ptr->name, &ptr->rent);
		ptr->m = ptr;
		printf("Id = %d, Name= %s, Rent= %.2f\n", ptr->id, ptr->name, ptr->rent);
	}
	return ptr;
}
