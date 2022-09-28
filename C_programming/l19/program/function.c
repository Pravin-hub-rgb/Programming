// #include <stdio.h>
// int sum(int a, int b); //this is called function prototype declaring before defining it.
// int main()
// {
//     int a, b, c;
//     a = 9;
//     b = 87;
//     c = sum(a, b);
//     printf("%d",c);
//     return 0;
// }
// int sum(int a, int b) //function declaration
// {
//     return a + b;
// }

// without argument and with return value
#include <stdio.h>
void printstar();
int main()
{
    printstar();
    return 0;
}
void printstar()
{
    int s;
    printf("Enter the no. of star you wanted to be printed :");
    scanf("%d", &s);
    for (int i = 0; i < s + 1; i++)
    {
        printf("%c", '*');
    }
}