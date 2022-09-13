#include <stdio.h>
int main(){
    int val;
    printf("Put 1 if you have passed both exam \n put 2 if you have passed only maths \n put 3 is you have only passed science: ");
    scanf("%d",&val);
    if(val == 1){
        printf("Congratulations you have passed both the exams your gift is Rs. 45");
    }
    else if(val == 2){
 printf("Congratulations you have passed only in maths exam your gift is Rs. 15");
    }
    else if(val == 3){
        printf("Congratulations you have passed only in science exam your gift if Rs. 15");
    }
    else{
        printf("Your input is incorrect \n Put 1 if you have passed both exam \n put 2 if you have passed only maths \n put 3 is you have only passed science: ");
        scanf("%d",&val);
    }
    return 0;
}