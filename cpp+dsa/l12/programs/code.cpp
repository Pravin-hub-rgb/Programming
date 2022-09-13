#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2; locially its correct but
        // we know that max int can be 2^31 - 1
        // if start and end are 2^31 - 1 then this will not be in int range
        // so we do this
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        return mid;
    }
}

int main()
{
    int even[] = {2, 4, 6, 8, 10, 12, 18};
    int odd[] = {3, 5, 7, 9, 11, 15, 17};
    cout << "Index of 6 is " << binarySearch(even, sizeof(even) / sizeof(int), 6);
    return 0;
}