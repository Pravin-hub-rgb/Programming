#include <stdio.h>
#include <string.h>

void parser()
{
    int in = 0; // variable to track whether we are inside the tag
    char word[] = "<h1>this is heading</h1>";
    char copy[strlen(word)];
    for (int i = 0; i < strlen(word); i++)
    {
        // printf("%c\n",word[i]);
        if (word[i] == '>')
        {
            while (word[i] != '<')
            {
                strcpy(copy, word[i]);
            }
        }
    }
    printf("%s", copy);
}

int main()
{
    char string[] = "";
    parser();
    // printf("The parsed string is ~~%s~~",string);
    return 0;
}