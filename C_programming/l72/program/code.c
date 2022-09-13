#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    printf("The sum of 1 and 2 is : %d",sum(1,2));
    int (*fPtr) (int, int); // fPtr is going to point a function which returns int and takes two int.
    fPtr = &sum;
    int d = (*fPtr)(4,6);
    printf("The value of d is : %d",d);
    return 0;
}