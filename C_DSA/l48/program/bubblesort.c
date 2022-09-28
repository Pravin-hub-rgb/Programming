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

void bubbleSort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
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
void adaptiveBubbleSort(int *arr, int n)
{
    int temp;
    int isSorted =1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted=0;
            }
        }
    }
    if(isSorted)
    {
        return;
    }
    
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int sorted[] = {1,2,3,4,5,6};
    // int n = sizeof(A) / sizeof(int);
    int n = 6;
    printArr(A, n);
    // bubbleSort(A, n);
    adaptiveBubbleSort(sorted,n);
    printArr(A, n);
    return 0;
}