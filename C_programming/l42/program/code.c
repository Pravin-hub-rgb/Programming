#include <stdio.h>

int func1(int b)
{
    static int myvar = 0;
    printf("The value of myvar is %d\n", myvar);
myvar++;
    return b + myvar;
}

int main()
{
    int a=3;
    static int c = 55;
    int b = 100;
    int val = func1(b); //here myvar is 0 as this runs first time
    func1(b); //when function is called 2nd time the value of myvar become 1 even though insisde the function
    //  it is initialized as 0 which mean that it forget the initalization
    // printf("The value of func1 if %d",func1(b));
    
    return 0;
}