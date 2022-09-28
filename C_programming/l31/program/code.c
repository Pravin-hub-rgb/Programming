#include <stdio.h>
void changeValue(int* address)
{
*address=345;
}
int main()
{
    int a = 34, b=56;
    printf("The value of a now is : %d",a);
    changeValue(&a);
    printf("\nThe value of a now is : %d",a);

    return 0;
}