#include <stdio.h>
int main()
{
    int i, age;
    for(i=0;i<10;i++){
        printf("%d\nEnter your age : ",i);
        scanf("%d", &age);
        if(age>10){
            continue;
            //but in case of nested loop, only one loop is terminated, the outer loop keeps on looping
        } else if(age<0){
            break;
        }
    }
    return 0;
}