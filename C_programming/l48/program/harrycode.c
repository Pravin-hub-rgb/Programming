#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the no. of characters in your Employee ID:",i+1);
        scanf("%d",&chars);
        getchar(); //often the scanf skips to take the value from user so we use getchar() so that we can consume value.
        ptr = (char*) malloc((chars+1)*sizeof(char)); // so as string have null character at end so we need to add extra space for that
        printf("Enter you employee ID :");
        scanf("%s",ptr); // no & as this is a pointer which is used to store address.
        printf("Your Employee ID is %s",ptr);
        free(ptr);
        i++;
    }
    return 0;
}