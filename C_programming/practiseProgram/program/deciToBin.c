#include <stdio.h>
int main()
{
    int num = 7;
    int i = 0;
    int arr[10];
    
    while (num > 0)
    {
        // printf("We are inside the loop");
        arr[i] = num % 2;
        num /= 2;
        i++;
    }
    for(int j = i-1; j >=0; j--){
        printf("%d  ",arr[j]);
    }
    return 0;
}