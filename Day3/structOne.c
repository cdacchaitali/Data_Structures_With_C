
// struct is calling & print the struct data

#include <stdio.h>

struct Employee
{
	int id;
	char name[25];
	double salary;
};

int main()
{
	struct Employee var = {1001, "Urvish Garg", 98724233.34};
	printf("ID: %d\tName: %s\tSal:%.2lf\n", var.id, var.name, var.salary);
}
