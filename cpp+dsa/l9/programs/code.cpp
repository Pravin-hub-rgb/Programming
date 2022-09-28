#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1};
    int i = 0;
    int j = sizeof(arr) / sizeof(int) - 1;
    print(arr, sizeof(arr) / sizeof(int));
    while (i < j)
    {
        // cout<<"inside";
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    print(arr, sizeof(arr) / sizeof(int));
    return 0;
}
