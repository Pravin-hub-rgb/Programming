#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 6, 3, 47, 1000, 77, 56, 345, 56, 678};
    int lar = arr[0];
    for (int i = 1; i < (sizeof(arr)) / (sizeof(int)); i++)
    {
        if (arr[i] > lar)
        {
            lar = arr[i];
        }
    }

    printf("The largest element in arr is = %d", lar);
    return 0;
}