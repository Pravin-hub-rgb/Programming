#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, array[i]);
    }
    array[0] = 33;
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n",i,ptr[i]); we can also use  the code below to access elements
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 653;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value at d2arr[%d][%d]is  : %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {23, 13, 3, 4};
    int d2arr[2][2] = {{1, 2}, {3, 4}};
    //  printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr); //here we are going to change the value of arr[i] inside the func. and it will get reflected to the main array also.
    //  printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr); // first time it prints all the element then after the loop it updates the element and then
    // func2(arr); // here the new modified value gets printed
    func3(d2arr);
    return 0;
}