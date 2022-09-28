#include <stdio.h>
void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);        
        i++;
    }
    printf("\n%s\n",str);//to print whole string we use %s format specifier
}
int main()
{
    // char str[] = {'h','a','r','r','y'}; //although the program doesn't show any error but this is not valid 
    char str[] = {'h','a','r','r','y','\0'}; // this is valid 
    printStr(str);
//taking input form user
char str2[20]; //gives error when we don't specify the length
gets(str2);
//printing using puts
puts(str2);

    return 0;
}