#include <stdio.h>
// int fib_recursive(int n)
// {
//     if(n==1 \\ n==0)
//     {
//     return n;
//     } 
//     else 
//     {
//         return fib_recursive(n-1) + fib_recursive(n-2)
//     }
// }
int main()
{
    int num;
    int first,second;    
    printf("Enter the number of fib series you want : ");
    scanf("%d",&num);
     int fib[num];
    // fib_recursive(num);
    for(int i=0;i<num;i++)
    {
        if(i==0)
        {
            fib[0]=0;
        }
        else if(i==1)
        {
            fib[1]=1;
        } 
        // else if(i==2)
        // {
        //     fib[2]=1;
        // } 
        else
        {
            first=fib[i-1];
            second=fib[i-2];
        fib[i]=first+second;
        
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",fib[i]);
    }
    
    return 0;
}
