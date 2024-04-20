//Abstract : Double Linkedlist 

#include<stdio.h>
#include<stdlib.h>

typedef struct Test
{
	int data;
	struct Test *prev, *next;
}Node;

Node *first, *last;

Node *createNode(int);
void addAtBeg(int);
void addAtEnd(int);
void disp();
void printForward();
void printReverse();
void deleteValue(int);
void addAtPos(int,int);
	
int main()
{
	first = last = NULL;
	int i;
	for(i=0;i<10;i+=2)
	{
		addAtBeg(100 +i);
		addAtEnd(200 +i+1);
	}
	disp();
	deleteValue(100);
	disp();
	addAtPos(550,4);
	disp();
}

Node *createNode(int num)
{
	Node *New = malloc(sizeof(Node));
	if(New!=NULL)
	{
		New->data = num;
		New->prev = New->next = NULL;
	}
	return New;
}

void addAtBeg(int num)
{
	Node *New = createNode(num);
	if(first == NULL)
		first = last = New;
	else
	{
		first->prev = New;
		New->next = first;
		first = New;
	}
}

void addAtEnd(int num)
{
	  Node *New = createNode(num);
        if(first == NULL)
                first = last = New;
        else
        {
                New->prev = last;
                last->next = New;
                last = New;
        }
}

void disp()
{
	printf("Forward : " );
	printForward();
	printf("Reverse : ");
	printReverse();
	printf("\n---------------------------------\n");
}

void printForward()
{
	Node *temp = first;
	while(temp != NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void printReverse()
{
	Node *temp = last;
	while(temp != NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

void deleteValue(int num)
{
	Node *temp = first;
	Node *prev = NULL;
	while(temp != NULL && temp->data !=num)
	{
		prev=temp;
		temp =temp->next;
		//temp=temp->prev;
	}
	prev->next = temp->next;
	temp->next->prev = prev;	
	printf("\n");
}

void addAtPos(int num,int pos)
{
	Node *New = createNode(num);
	Node *temp = first;
	int counter = 1;
	while(temp != NULL && counter<pos-1)
	{
		temp = temp->next;
		counter++;
	}
	New->next = temp->next;
	New->prev = temp->next->prev;
	temp->next = New;
	New->next->prev = New;
}
