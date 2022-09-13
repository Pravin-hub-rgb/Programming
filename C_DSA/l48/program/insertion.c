#include <stdio.h>

void printArr(int arr[], int n)
{
    printf("array -> ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int *arr, int n)
{
    int current;
    int j;
    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArr(A, n);
    insertionSort(A, n);
    printArr(A, n);
    return 0;
}

// ***********************************************************************
