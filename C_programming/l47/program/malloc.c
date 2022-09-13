#include <stdio.h>
#include <string.h>
#include <stdlib.h> //calloc malloc realloc and free are defined inside this header file

int main()
{
    // use of malloc
    int *ptr;
    int n;
    ptr = (int *)malloc(n * sizeof(int)); // create dynamic array of 10 size
    printf("Enter the size of teh array you want to create :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this :", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}