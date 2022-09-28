#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile2.txt", "w");
    // char c = fgetc(ptr);
    // printf("The character I got was : %c\n",c);

    // char str[34];
    // fgets(str, 5, ptr);
    // printf("The string is : %s\n", str);

    // fputc('o',ptr);
    fputs("Harry is great",ptr);
    fclose(ptr);
    return 0;
}