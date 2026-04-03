#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of your pattern: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)//for rows
    {
        for(int j=0;j<n-i;j++)//left triangle
           printf("%d ",(j+1));        

        for(int k=0;k<2*i;k++)//mid spaces
            printf("  ");        

        for(int m=n-i;m>=1;m--)//right triangle
            printf("%d ",m);

        printf("\n");
    }
    return 0;
}