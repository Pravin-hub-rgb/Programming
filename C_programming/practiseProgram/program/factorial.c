// #include <stdio.h>

// int main()
// {
//     int num = 5;
//     long factorial = 1;
//     if (num == 0 || num == 1)
//     {
//         printf("1");
//     }
//     else
//     {
//         while (num >= 1)
//         {
//             factorial *= (long)(num);
//             num--;
//         }
//     }
//     printf("Factorial = %ld", factorial);
//     return 0;
// }
#include <stdio.h>

int factorialRecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    while (n > 1)
    {
        return n * factorialRecursive(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the value of number for factorial calculation\n");
    scanf("%d", &n);
    int factorial = factorialRecursive(n);
    printf("The value of factorial is %d\n", factorial);
    return 0;
}