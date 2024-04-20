
// Sorting in which bubble, selection & insertion

#ifndef NUM
#define NUM 10
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int *, int);
void fillArr(int *, int);
void bubbleSort(int *, int);
void selectionSort(int *, int);
void insertionSort(int *, int);

int main()
{
	srand(time(NULL));
	int arr[NUM];
	fillArr(arr, NUM);
	printArr(arr, NUM);
	insertionSort(arr, NUM);
	printArr(arr, NUM);
}

void printArr(int *arr, int size)
{
	int cnt;
	for (cnt = 0; cnt < size; ++cnt)
		printf("%d  ", arr[cnt]);
	printf("\n");
}

void fillArr(int *arr, int size)
{
	int cnt;
	for (cnt = 0; cnt < size; ++cnt)
		arr[cnt] = rand() % (NUM * 10);
}

void bubbleSort(int *arr, int size)
{
	int temp;
	for (int i = 0; i < (size - 1); i++)
	{
		for (int j = 0; j < (size - i - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void selectionSort(int *arr, int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		int imin = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[imin])
				imin = j;
		}
		temp = arr[i];
		arr[i] = arr[imin];
		arr[imin] = temp;
	}
}

void insertionSort(int *arr, int size)
{
	int i, j, key;
	for (i = 1; i < size; ++i)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
