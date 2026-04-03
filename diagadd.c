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
void diagonalsum(int r, int c, int mat[r][c])
{
    int ld=0,rd=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
                ld+=mat[i][j];
            if((i+j)==(r-1))
                rd+=mat[i][j];
        }
    }
    printf("\nSum of left diagonal elements = %d.",ld);
    printf("\nSum of right diagonal elements = %d.",rd);
}
int main()
{
    int r,c;
    printf("Enter the row size of the array: ");
    scanf("%d",&r);
    printf("Enter the column size of the array: ");
    scanf("%d",&c);

    if(r!=c)
    {
        printf("\n***DIAGONAL SUM IS ONLY POSSIBLE IN A SQUARE MATRIX***");
        return -99;
    }

    int arr[r][c];

    //INPUT-->
    printf("\nEnter %d elements in array:\n",(r*c));
    read(r,c,arr);    
    
    //PRINT-->
    printf("\nInput Array:\n");
    print(r,c,arr);
  
    //DIAGONAL SUM-->
    diagonalsum(r,c,arr); 

    return 0;
}