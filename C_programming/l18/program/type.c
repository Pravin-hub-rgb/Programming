#include <stdio.h>
int main()
{
    //Implicit Type casting
    int a;
    float b = 54.3434;
    char c[]="hi";
    // a = b;
    // printf("%d",a);

    //Explicit Type casting
    printf("The value of b:  %d\n",(int) b);
    printf("The value of c:  %d",(int) c);
    return 0;
}