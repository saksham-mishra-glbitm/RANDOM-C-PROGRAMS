#include <stdio.h>
void read(int r, int c, int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
void print(int r, int c, int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
void sumall(int r, int c, int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        int rs=0;
        for(int j=0;j<c;j++)
        {
            rs+=mat[i][j];
        }
        printf("\nSum of row %d = %d.",(i+1),rs);
    }
    printf("\n");
    for(int i=0;i<c;i++)
    {
        int cs=0;
        for(int j=0;j<r;j++)
        {
            cs+=mat[j][i];
        }
        printf("\nSum of column %d = %d.",(i+1),cs);
    }
}
int main()
{
    int r,c;
    printf("Enter the row size of the array: ");
    scanf("%d",&r);
    printf("Enter the column size of the array: ");
    scanf("%d",&c);

    int arr[r][c];

    //INPUT-->
    printf("\nEnter %d elements in array:\n",(r*c));
    read(r,c,arr);    
    
    //PRINT-->
    printf("\nInput Array:\n");
    print(r,c,arr);
  
    //SUM-->
    printf("\nSum of all the rows and columns elements:\n");
    sumall(r,c,arr); 

    return 0;
}