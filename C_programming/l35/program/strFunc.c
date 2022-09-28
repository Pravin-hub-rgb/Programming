#include <stdio.h>
#include <string.h>
int main()
{
    char string1[]="harry";
    char string2[]="ravi";
    char string3[10];
    // puts(strcat(string1,string2));
    // printf("The length of string1 is : %d",strlen(string1)); //this can't be printed using puts.
    // printf("The reversed string string1 is: %s", strrev(string1));
    // puts(strcpy(string3,strcat(string1,string2)));
    printf("The strcmp for string1, string2 returned : %d", strcmp(string1,string2));
    //We can't expect ASCII value from this. It returns 0 if both string are same.
    return 0;
}