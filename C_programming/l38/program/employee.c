#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[30];
    char pNo[12];
    char dep_name[20];
    int room_no;
    float weight;

};
int main()
{
    struct Employee e1;
    printf("Employee Registration\n");
    printf("Enter your name : ");
    scanf("%s",&e1.name);
    printf("\nEnter your Phone no. :");
    scanf("%s",&e1.pNo);
    printf("\nEnter you Department no :");
    scanf("%s",&e1.dep_name);
    printf("\nEnter you room no :");
    scanf("%d",&e1.room_no);
    printf("\nEnter you weight :");
    scanf("%f ",&e1.weight);
    printf("*******************************");
    //  printf("Name - %s \n Phone no - %s \n Department name - %s \n room no - %d \n weight - %f",e1.name,e1.pNo,e1.dep_name,e1.room_no,e1.weight);
    printf("Name - %s \n  Phone no - %s \n Department name - %s \nRoom no - %d \n Weight - %f",e1.name,e1.pNo,e1.dep_name ,e1.room_no,e1.weight);
    return 0;
}