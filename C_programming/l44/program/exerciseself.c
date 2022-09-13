#include <stdio.h>
#include <string.h>
struct Drivers 
{
char name[100];
double dl_no;
char route[100];
int kms;
} d1,d2,d3;

//printing all the details of driver
// print_details(struct driver)
// {
// printf("name : %s",driver.name);
// }

int main()
{
    int detail_num;
    printf("****** Travel Agency *******\n");
    printf("if you want to fill your details enter : 1 and 0 to exit : ");
    scanf("%d",&detail_num);
    if(detail_num==1)
    {
        printf("Driver 1 enter your details\n");
        printf("Enter your name: ");
        scanf("%s",&d1.name);
        printf("\nEnter your driving license no.: ");
        scanf("%d",&d1.dl_no);
        printf("\nEnter your route: ");
        scanf("%s",&d1.route);
        printf("\nEnter your kms: ");
        scanf("%s",&d1.kms);
        //we can get the details of driver 2 the same and also print it.
    }
    else {
        printf("You have exited successfully");
    }  
    printf("name - %s",d1.name);
    return 0;
}