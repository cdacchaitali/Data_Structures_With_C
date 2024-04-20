
// Factorial of a number

#include <stdio.h>

int factor(int);

int main()
{
	printf("factor(7): %d\n", factor(7));
}

int factor(int num)
{
	if (num <= 1)
		return 1;
	return num * factor(num - 1);
}
