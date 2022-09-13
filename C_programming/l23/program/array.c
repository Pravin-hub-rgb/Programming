#include <stdio.h>

int main()
{
    int marks[4];
    int marks2[]={2,3,55,33,553}; //declaration with initialization
    // marks[0]=34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0]=454;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d",&marks[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d element of the array is %d\n",i, marks[i]);
        
    // }

    //2d array
    int student[][4]={{1,2,3,4},{3,4,5,6}}; //here we have to declare atleast with column numbers
    //printing the array
  
    for ( int i = 0; i < 2; i++) //double for loop in 2d array
    {
        for (int j = 0; j < 4; j++)
        {
          printf("Value of %d, %d element of the array is %d\n",i,j,student[i][j]);
        }        
        
    }   
    return 0;
}