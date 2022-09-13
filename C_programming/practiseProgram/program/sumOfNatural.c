#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }
    sum = ((n*n+n)/2);
    printf("The sum till %d is = %d",n,sum);
    return 0;
}