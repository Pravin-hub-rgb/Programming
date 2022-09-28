#include <stdio.h>

// int enterVal()
// {
//     printf("Enter the value : %d", &num);
// }

void convert(int val1, char* command)
{
    while(command != "q")
    {
        int num;
        num = val1;
        float fvalue;
        if(command == "kms to miles")
        {
            printf("Enter Kilometers : ");
            scanf("%d\n",&num);
            fvalue=num*0.62137119;
            printf("%d kms is %f miles",num, fvalue);

        }
        else if(command == "inches to foot")
        {
            printf("Enter inches : ");
            scanf("%d\n",&num);
            fvalue=num/12;
            printf("%d inches is %f foot",num,fvalue);
        }
        else if(command == "cms to inches")
        {
            printf("Enter inches : ");
            scanf("%d\n",&num);
            fvalue=num*0.39;
            printf("%d cms is %f inches",num,fvalue);
        }
        else{
            printf("The value you entered is not correct");
        }
        
    }
}

int main()
{
    int numVal;
    char* funcValue;
    printf("Enter what you want to do :");
    scanf("%c\n", &funcValue);
    printf("Enter the number :");
    scanf("%d",&numVal);
    convert(numVal,funcValue);
    return 0;
}