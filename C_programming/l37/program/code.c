#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    struct Student harry, ravi;
    harry.id=1;
    harry.marks=466;
    strcpy(harry.name,"Harry Coder");
    harry.fav_char='p';
    ravi.id=2;    
    ravi.marks=466;    
    ravi.fav_char='p';
    strcpy(ravi.name,"Ravi Kumar");
    struct Student subham ={3,466,'p',"Subham Kumar"};    
    // printf("Harry got %d marks", harry.marks);
    //quick quiz
    // print all information of a given student
    printf("Harry's full name is %s, ID is %d, marks = %d and favourite character = %c \n",harry.name,harry.id,harry.marks,harry.fav_char);
    printf("Ravi's full name is %s, ID is %d, marks = %d and favourite character = %c\n",ravi.name,ravi.id,ravi.marks,ravi.fav_char);
    printf("Subham's full name is %s, ID is %d, marks = %d and favourite character = %c\n",subham.name,subham.id,subham.marks,subham.fav_char);   
    return 0;
}