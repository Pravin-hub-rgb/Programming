#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter person one name : ");
    gets(str1);
    printf("\nEnter person two name : ");
    gets(str2);
    printf("\n%s is a friend of %s",str1,str2);
    return 0;
}