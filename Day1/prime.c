// Is number is Prime print those number & calculate how many non prime number came in between prime numbers

#include <stdio.h>

#define NUM 100

void printArr(int *, int);
void fillArr(int *, int);
int isPrime(int);
void processArr(int *, int);
void counterArr(int *, int);

int main()
{
	int arr[NUM] = {0}; // Partial Initialization
	printArr(arr, NUM);
	printf("Emter the first value: ");
	scanf("%d", &arr[0]);
	fillArr(arr, NUM);
	printArr(arr, NUM);
	processArr(arr, NUM);
	printArr(arr, NUM);
	counterArr(arr, NUM);
}

void fillArr(int *arr, int size)
{
	int cnt;
	for (cnt = 0; cnt < size; ++cnt)
		arr[cnt] = arr[0] + cnt;
}
void printArr(int *arr, int size)
{
	int cnt;
	for (cnt = 0; cnt < size; ++cnt)
		printf("%d  ", arr[cnt]);
	printf("\n");
}

int isPrime(int num)
{
	int flag = 1;
	for (int i = 2; i < num; i++)
	{
		if ((num % i) == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		return 1;
	else
		return 0;
	// return 1 if prime else retrun 0
}

void processArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (!isPrime(arr[i]))
			arr[i] = 0;
	}
	// check each number from array
	/// using isprime(), if prime do nothing else make 0
}

void counterArr(int *arr, int size)
{
	int count = 0;
	int great = 0;
	int min = 0;
	int max = 0;
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count++;
		}
		else
		{
			if (great < count)
			{
				max = arr[i];
				great = count;
			}
			count = 0;
		}
	}
	min = max - great - 1;
	printf("%d  ", min);
	printf("%d  ", great);
	printf("%d  ", max);
	printf("\n");
}
