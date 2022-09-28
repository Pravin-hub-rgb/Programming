#include <stdio.h>

int myfunc()
{
static int myVar; 
myVar++; //incrementing each time the function is called
printf("myVar is %d\n",myVar);
   
}
int sum = 343;
int main()
{
    myfunc(); //calling 1st time
    myfunc(); //calling 2nd time
    myfunc(); //calling 3rd time
    myfunc(); //calling 4th time
    return 0;
}