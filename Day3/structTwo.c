
// Accesing struct data with pointer

#include <stdio.h>

struct Employee
{
	int id;
	char name[25];
	double salary;
};

int main()
{
	struct Employee var = {1001, "Anjana Garg", 98723.34};
	struct Employee *ptr = &var;
	printf("ID: %d\tName: %s\tSal:%.2lf\n", var.id, var.name, var.salary);
	printf("ID: %d\tName: %s\tSal:%.2lf\n", (*ptr).id, (*ptr).name, (*ptr).salary);
	printf("ID: %d\tName: %s\tSal:%.2lf\n", ptr->id, ptr->name, ptr->salary);
}
