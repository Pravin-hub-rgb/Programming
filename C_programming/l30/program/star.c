#include <stdio.h>
int main()
{
    int typeTri;
    printf("Type 0 - Triangular star pattern\n Type 1 - Reverse triangular pattern :");
    scanf("%d", &typeTri);
    if (typeTri == 0)
    {
        printf("*\n");
        printf("**\n");
        printf("***\n");
        printf("****\n");
        printf("*****\n");
    } else if(typeTri == 1)
    {
        printf("*****\n");
        printf("****\n");
        printf("***\n");
        printf("**\n");
        printf("*\n");
    }
    return 0;
}