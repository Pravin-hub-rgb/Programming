#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the size of teh array you want to create :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this :", i);
        scanf("%d", &ptr[i]);
        //in calloc if we don't initailize it with any value it assigns 0
        //so initializing is a extra task here that's why malloc is prefered
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}