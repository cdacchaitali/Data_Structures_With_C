
// Tower of Hanoi

#include <stdio.h>

void hannoi(int, char, char, char);

int main()
{
	int n = 3;
	char from = 'A';
	char to = 'B';
	char via = 'C';
	hannoi(n, from, to, via);
}

void hannoi(int n, char from, char to, char via)
{
	if (n == 1)
	{
		printf("move disk 1 from %c to %c\n", from, to);
	}
	else
	{
		hannoi(n - 1, from, via, to);
		printf("Move disk %d from %c to %c \n", n, from, to);
		hannoi(n - 1, via, to, from);
	}
}
