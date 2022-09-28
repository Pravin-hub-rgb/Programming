#include <stdio.h>
int main(){
    int age=0;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>18){
        printf("You are able to vote");
    }
    else {
        printf("You are not able to vote \n try next year");
    }
    return 0;
}