#include <stdio.h>
void arrayRev(int size, int arr[size])
{
    // copying reverse of an array to another array
    int store=size-1;
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
       arr2[store]= arr[i];
       store--;
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr2[i]);
    }

    // int arr2[];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    int size = sizeof(arr) / sizeof(int);
    // printf("%d", size);
    arrayRev(size, arr);
    return 0;
}