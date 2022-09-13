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

void selectionSort(int *arr, int n)
{
    int iMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        iMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[iMin])
            {
                iMin = j;
            }
        }
        int temp = arr[i];
        arr[i] =arr[iMin];
        arr[iMin]=temp;
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArr(A, n);
    selectionSort(A, n);
    printArr(A, n);
    return 0;
}