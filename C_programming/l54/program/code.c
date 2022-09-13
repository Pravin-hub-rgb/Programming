#include <stdio.h>
#include <stdlib.h>

int *functionDangling() // int* as we are going to return an address
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    // the scope of the variable 'sum' is local so it get destroyed outside the function
    return &sum;
}

int main()
{
    // case 1: De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // now this ptr is now a dangling pointer

    // case 2: Function returning local variable address
    int *dangPtr = functionDangling(); //dangPtr is now a dangling pointer

    //case 3: If a variable goes out of scope
    int *danglingPtr3;
    {
        int a = 12;
    danglingPtr3 = &a; // as 'a' is only available inside this scope so outside the scope it goes out of scope
    }
    //here variable 'a' goes out of scope which means danglingPtr3 is pointing to a location which is free and hencedanglingPtr3 is now a dangling pointer
    return 0;
}