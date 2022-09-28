#include <stdio.h>
void multi(int a);
int main()
{
    int num=0;
    printf("Enter the number whose multiplication table you want : ");
    scanf("%d",&num);
    multi(num);
    return 0;
}

void multi(int a)
{
    printf("The multiplication table of :%d\n",a);
    for(int i=1;i<11;i++)
    {
        printf("%d X %d = %d \n",a,i,a*i);
    }
}