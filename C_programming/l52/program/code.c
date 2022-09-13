#include <stdio.h>
int main()
{
    int a=345;
    float b=8.3;
    void *ptr;
    ptr = &a;
    // printf("The value of a is %d",*ptr); //this is not allowed
    printf("The value of a is %d",*((int*)ptr)); //compiler is saying that it was a void pointer before
    //but now it is a interger pointer, so now by dereferencing it we want the value which it is pointing now
    // we can change its value also by doing typecasting
    ptr = &b;
    printf("\nThe value of b is %f",*((float*)ptr));
    return 0;
}