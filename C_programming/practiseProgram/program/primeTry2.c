#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 11};
    int num = 169, value;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (num % arr[i] == 0)
        {
            value = 1;
            break;
        }
        else
        {
            value = 0;
        }
    }
    if (value)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}