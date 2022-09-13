#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{

    int mid, high, low;
    low = 0;
    high = size - 1;
    // start seraching
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // search end
    return -1;
}

int main()
{
    // int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 4, 54643, 56, 34};
    // int size = sizeof(arr) / sizeof(int); // gives size of array without hard coding

    // sorted arrray for binary seacrh
    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    printf("The index where 73 is located is : %d", binarySearch(arr, size, 73));
    return 0;
}