#include <stdio.h>
int main()
{
    int a = 34;
    int* ptra = &a;
    printf("%d", ptra);   // lets say this is x
    printf("\n%d", ptra+1);   // so this prints x+4, cuse that's the size of int
    return 0;
}