#include <stdio.h>

void convert(int com)
{
    while (com != 0)
    {
        int num;
        // float fvalue;
        if (com == 1)
        {
            printf("Enter Kilometers : ");
            scanf("%d\n", &num);
            // fvalue = num * 0.62137119;       
            printf("%d kms is %f miles", num, num * 0.62137119);
            break;
        }
        else if (com == 2)
        {
            printf("Enter inches : ");
            scanf("%d\n", &num);            
            printf("%d inches is %f foot", num, num/12);
            break;
        }
        else if(com == 3)
        {
            printf("Enter cms : ");
            scanf("%d\n", &num);           
            printf("%d cms is %f inches", num, num*0.39);
            break;
        }
        else if(com == 4)
        {
            printf("Enter pound : ");
            scanf("%d\n", &num);           
            printf("%d pound is %f kgs", num, num*0.45359237);
            break;
        }
        else if(com == 5)
        {
            printf("Enter inches : ");
            scanf("%d\n", &num);           
            printf("%d inches is %f meters", num, num*0.0254);
            break;
        }
        else
        {
            printf("The value you have entered doesn't comply with any conversion program.");
            break;
        }
    }
}

int main()
{
    int com;
    printf("kms to miles - type 1 : \n inches to foot - type 2 : \n cms to inches - type 3 : \n pound to kgs = - type 4 : \n inches to meters - type 5 \n To quit - type 0 : ");
    scanf("%d", &com);
    convert(com);
    return 0;
}