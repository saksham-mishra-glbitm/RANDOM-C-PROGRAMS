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
void multiplication(int n, int mat1[n][n], int mat2[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x=0;
            for(int k=0;k<n;k++)
                x += mat1[i][k]*mat2[k][j];                
            printf("%d\t",x);
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
  
    //MULTIPLICATION-->
    printf("\nMatrix after multiplication:\n");
    multiplication(n,mat1,mat2);    

    return 0;
}
