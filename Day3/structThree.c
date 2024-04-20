
// Linked list with create node & give input direct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
	int id;
	char name[25];
	double salary;
};

int main()
{
	struct Employee *ptr = malloc(sizeof(struct Employee));
	if (ptr != NULL)
	{
		ptr->id = 1001;
		strcpy(ptr->name, "Chaitali Dinkar Ahire");
		ptr->salary = 78000.12;
		printf("ID: %d\tName: %s\tSal:%.2lf\n", ptr->id, ptr->name, ptr->salary);
	}
}
