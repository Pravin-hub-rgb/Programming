#include <stdio.h>
void arrayRev(int arr[])
{
    // we will do swaping- will swap 0 index with last index then so on
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap item arr[i] with item arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
        // if this runs for whole then it won't change anything cuse it will redo it.
        // so we have to stop it int middle for that we do i<7/2
    }
}
void printArr(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("\n Before reversing the array\n");
    printArr(arr);
    arrayRev(arr);
    printf("\n After reversing the array\n");
    printArr(arr);

    return 0;
}