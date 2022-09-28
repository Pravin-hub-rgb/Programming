#include <stdio.h>
#include <stdlib.h>

// int sum(int a, int b)
// {
//     return a + b;
// }
// void greetHelloAndExecute(int (*fptr)(int, int))
// {
//     printf("Hello user\n");
//     printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
// }

// void greeGmAndExecute(int (*fptr)(int, int))
// {
//     printf("Good moring user\n");
//     printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
// }

// *********** task function greetGaAndExecute, greetGeAndExecute ************
int calAvg(int a, int b)
{
    return ((a+b)/2);
}
void greetGaAndExecute(int (*fptr)(int, int))
{
    printf("Good Afternoon\n");
    printf("The average of 10 and 4 is = %d\n", fptr(10, 4));
}
void greetGeAndExecute(int (*fptr)(int, int))
{
    printf("Good Evening\n");
    printf("The average of 10 and 4 is = %d\n", fptr(10, 4));
}

int main()
{
    // int (*ptr)(int, int);
    // ptr = sum;
    // greeGmAndExecute(ptr);
    // greetHelloAndExecute(ptr);
    int (*avg)(int, int);
    avg = calAvg;
    greetGaAndExecute(avg);
    greetGeAndExecute(avg);
    return 0;
}