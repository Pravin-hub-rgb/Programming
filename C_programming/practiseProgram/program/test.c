// #include <stdio.h>
// #include <math.h>

// int isPrime(int num)
// {
//     for (int i = 0; i <= sqrt(num) ; i++)
//     {
//          if(num % i == 0)
//             return 0;
//     }
//     return 1;
// }

// int main()
// {
//     printf("Enter a number : ");
//     int num;
//     scanf("%d",&num);
//     printf("%d",isPrime(num));
//     if(isPrime(num)==1)
//         printf("The Entered Number Is Prime");
//     else
//         printf("The Entered Number Is not Prime");
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int num = 31, isPrime = 1;
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}