#include <stdio.h>
void read(int n,int mat[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
void print(int n,int mat[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
void addition(int n, int mat1[n][n], int mat2[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",(mat1[i][j]+mat2[i][j]));
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the size of both the matrices: ");
    scanf("%d",&n);

    int mat1[n][n], mat2[n][n];

    //INPUT-->
    printf("\nEnter %d elements in matrix 1:\n",(n*n));
    read(n,mat1);    
    printf("\nEnter %d elements in matrix 2:\n",(n*n));
    read(n,mat2);

    //PRINT-->
    printf("\nMATRIX 1:\n");
    print(n,mat1);
    printf("\nMATRIX 2:\n");
    print(n,mat2);

    //ADDITION-->
    printf("\nMatrix after addition:\n");
    addition(n,mat1,mat2);

    return 0;
}
