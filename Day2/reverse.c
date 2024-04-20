
// Reverse an array

#ifndef NUM
#define NUM 10
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int *, int);
void fillArr(int *, int);
void reverseArr(int *, int, int);

int main()
{
        srand(time(NULL));
        int arr[NUM];
        fillArr(arr, NUM);
        printArr(arr, NUM);
        reverseArr(arr, 0, NUM - 1);
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

void reverseArr(int *arr, int start, int size)
{
        if (start > size)
                return;
        int temp = arr[start];
        arr[start] = arr[size];
        arr[size] = temp;
        reverseArr(arr, start + 1, size - 1);
}
