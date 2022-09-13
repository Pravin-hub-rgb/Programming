#include <stdio.h>
#include <string.h>


typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

 // typedef [previous name] [alias name];
int main()
{    

    // struct Student s1,s2; //This old name also works
    std s1, s2; // this also works

    int *a, b; // this doesn't make both variable pointer type only 'a' is a pointer
    typedef int *intptr;
    intptr c, d; // this makes both the variable pointer type and we can store address in it.
    // typedef unsigned long ul;
    // ul l1;
    // typedef int integer;
    // integer a = 5;
    // printf("%d",a);

    return 0;
    int *a;
}
