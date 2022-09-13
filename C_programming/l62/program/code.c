#include <stdio.h>
int main()
{
    FILE *ptr=NULL; //this is a good practise
    char string[34];

    // *****Reading a file ***********
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string); //what this do is takes content till space or new line from file and store it to string variable
    // printf("Content of this file has :%s\n",string);

    // ******* Writing a file **********
    char string2 [100]="This content was produced by Tutorial64.c";
    ptr = fopen("myfile.txt","w");
 fprintf(ptr,"%s",string2); //inside the file this string will we inserted
 //all the older text got removed and the text stored in string2 was inserted
//  ptr = fopen("myfile.txt","a"); // in this mode the text inside string2 will be added in the end to the file
    return 0;
}