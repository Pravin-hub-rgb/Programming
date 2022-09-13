#include <stdio.h>
void ads(int *vala, int *valb)
{
    int temp;
    temp = *vala + *valb;
    *vala = temp;
    temp = *vala -*valb - *valb;
    *valb=temp;
}
int main()
{
    int a = 4, b = 3;
    ads(&a, &b);
    printf("The value of a is : %d and the value of b is : %d", a,b);
    return 0;
}