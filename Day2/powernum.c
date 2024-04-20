
// Power of the number raise to number

#include <stdio.h>

int powernum(int, int);

int main()
{
	printf("power of the num(2,5): %d\n", powernum(2, 5));
}

int powernum(int num, int power)
{
	if (power > 1)
	{
		return num *= powernum(num, power - 1);
	}
}
