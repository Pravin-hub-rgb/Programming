#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL; // when we dereference this value the program crashes so to stay safe we do
    if (ptr != NULL) //for error handling
    {
        printf("The value at ptr is %d", *ptr); // dereferencing to print the value
    }
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced.");
    }
    printf("The address of a is %d", ptr);
    return 0;
}