#include <stdio.h>

int m, n;
void printMat(int mat[m][n])
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element at [%d][%d] : %d\n", i, j, mat[i][j]);
        }
    }
}
int inputMat(int mat[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    return 0;
}
int main()
{
    int m1, n1, m2, n2;
    printf("Enter rows and columns of first matrix.\nRows : ");
    scanf("%d", &m1);
    printf("Columns : ");
    scanf("%d", &n1);
    printf("Enter rows and columns of second matrix.\nRows : ");
    scanf("%d", &m2);
    printf("Columns : ");
    scanf("%d", &n2);
    if (m1 != n2)
    {
        printf("Multiplication can't be possible for these two matrices");
    }
    int mat1[m1][n1], mat2[m2][n2];
    // taking elements of matrix
    printf("***** Enter elements of first Matrix ******\n");
    m = m1;
    n = n1;
    inputMat(mat1);
    printf("***** Enter elements of second Matrix ******\n");
    m=m2;
    n=n2;
    inputMat(mat2);
    printf("*** Printing first  Matrix ***\n");
    printMat(mat1);
    printf("*** Printing second Matrix ***\n");
    printMat(mat2);
    printf("\n**** Multiplication matrix is : ****\n");
// I couldn't figure out how to multiply the matrices by my own

    return 0;
}