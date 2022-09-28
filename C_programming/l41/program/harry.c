#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1; // won't collect
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if(in==0)
        {
            //we are inside the string between tags
            string[index]=string[i]; //modifying the same string.
            index ++;
        }
    }
    string[index]='\0';
    //now we have to remove the trailing spaces  from the begining
    while(string[0]==' ')
    {
        //shift the string to the left
        for(int j=0;j<strlen(string);j++)
        {
            string[j]=string[j+1];
        }
    }
     //now we have to remove the trailing spaces  from the end
     while(string[strlen(string)-1]==' ')
     {
        string[strlen(string)-1] ='\0';
     }
}

int main()
{
    char string[] = "<h1>     this is a heading     </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}