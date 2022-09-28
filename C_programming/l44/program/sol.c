#include <stdio.h>
#include <string.h>

typedef struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
} df;

int main()
{
    df d1, d2, d3;
    printf("Enter the details of the drivers\n");
    printf("Enter the details of the 1st drivers\n");
    printf("Enter the name of the 1st driver :");
    scanf("%s", &d1.name);
    printf("\nEnter your driving license no.: ");
    scanf("%s", &d1.dlNo);
    printf("\nEnter your route: ");
    scanf("%s", &d1.route);
    printf("\nEnter your kms: ");
    scanf("%d", &d1.kms);
    printf("Enter the details of the 2nd drivers\n");
    printf("Enter the name of the 2nd driver :");
    scanf("%s", &d2.name);
    printf("\nEnter your driving license no.: ");
    scanf("%s", &d2.dlNo);
    printf("\nEnter your route: ");
    scanf("%s", &d2.route);
    printf("\nEnter your kms: ");
    scanf("%d", &d2.kms);
    printf("Enter the details of the 3rd drivers\n");
    printf("Enter the name of the 3rd driver :");
    scanf("%s", &d3.name);
    printf("\nEnter your driving license no.: ");
    scanf("%s", &d3.dlNo);
    printf("\nEnter your route: ");
    scanf("%s", &d3.route);
    printf("\nEnter your kms: ");
    scanf("%d", &d3.kms);
    printf("*** Printing information of these drivers ***\n");
    printf("For Driver No 1: Name is %s, Dl no. is %s, route is %s and kilometer is %d\n",d1.name,d1.dlNo,d1.route,d1.kms);
    printf("For Driver No 2: Name is %s, Dl no. is %s, route is %s and kilometer is %d\n",d2.name,d2.dlNo,d2.route,d2.kms);
    printf("For Driver No 3: Name is %s, Dl no. is %s, route is %s and kilometer is %d\n",d3.name,d3.dlNo,d3.route,d3.kms);
    return 0;
}