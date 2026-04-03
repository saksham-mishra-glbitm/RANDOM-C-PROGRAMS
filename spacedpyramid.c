#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of your pattern: ");
    scanf("%d",&n);
    int p=1;
    for(int i=0;i<n;i++)//for rows
    {
        p=1;
        for(int j=0;j<=i;j++)//left triangle
           printf("%d ",(p++));
        

        for(int k=0;k<(2*n-2)-2*i;k++)//mid spaces
        {
            printf("  ");
        }

        for(int m=0;m<=i;m++)//right triangle
        {
            int d=i-m+1;
            printf("%d ",(d--));
        }

        printf("\n");
    }
    return 0;
}