#include <stdio.h>
int main()
{
    int num = 14459;
    int digits = 0;
    int temp = num;    
    num = 0;
    while (temp)
    {
        num*=10;
        num += temp % 10;
        temp /= 10;
    }
    printf("The reversed number is %d",num);
    return 0;
}