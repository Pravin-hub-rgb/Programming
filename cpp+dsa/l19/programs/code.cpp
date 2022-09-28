#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            // shift
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    insertionSort(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}