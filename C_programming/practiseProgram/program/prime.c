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