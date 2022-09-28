#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 455)
    {
        printf("Welcome to code with harry");
        i2 = malloc(3444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // without this we will encounter a situation of memory leak
    }

    return 0;
}