#include <stdio.h>
#include <stdlib.h>
int main()
{
    int len;
    char *charPtr;
    printf("Enter the length of Employee ID :");
    scanf("%d", &len);
    charPtr = (char *) malloc(len* sizeof(char));
    printf("Enter the Employee ID: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%c",&charPtr[i]);
    }
    printf("The employee ID is :");
    for (int i = 0; i < len; i++)
    {
        printf("%c",charPtr[i]);
    }

    //Entering value of second employee
    printf("Enter the length of 2nd Employee ID :");
    scanf("%d", &len);
    charPtr = (char *) realloc(charPtr,len*sizeof(char));
    printf("Enter the 2nd Employee ID: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%c",&charPtr[i]);
    }
    printf("The 2nd employee ID is :");
    for (int i = 0; i < len; i++)
    {
        printf("%c",charPtr[i]);
    }
    free(charPtr);
    return 0;
}