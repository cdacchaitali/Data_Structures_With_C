// Get data from file without linked list

#include <stdio.h>

int main()
{
	int id;
	char name[100];
	double salary;
	int counter;

	FILE *in = fopen("myData.txt", "r");
	while ((counter = fscanf(in, "%d, %[^,], %lf", &id, name, &salary)) != EOF)
	{
		printf("Id : %d | Name :%s  | Salary : %.2lf\n", id, name, salary);
	}
	return 0;
}
