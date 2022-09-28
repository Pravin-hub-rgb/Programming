#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void revStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("type 0 - star pattern \n type 1 - reverse star pattern :");
    scanf("%d",&type);
    printf("\nHow many rows do you want ? :");
    scanf("%d\n", &rows);
    if (type == 0)
    {
        starPattern(rows);
    }
    else if (type == 1)
    {
        revStarPattern(rows);
    }
    else {
        printf("You have entered an invalid choice");
    }
    
    return 0;
}