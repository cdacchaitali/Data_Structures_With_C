
// Fibonnacci Number

#include <stdio.h>
#ifndef NUM
#define NUM 10
#endif

int fibonacci(int);

int main()
{
	printf("printing fibo series: \n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ----> :%d\n", i + 1, fibonacci(i));
	}
}
int fibonacci(int num)
{
	if (num <= 1)
		return num;
	return fibonacci(num - 1) + fibonacci(num - 2);
}
