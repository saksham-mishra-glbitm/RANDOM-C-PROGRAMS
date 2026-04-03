#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of your pattern: ");
    scanf("%d",&n);

    int p=1;
    for(int i=0;i<n;i++)//for rows
    {
        for(int j=0;j<i;j++)//spaces
            printf("  ");
        
        for(int k=0;k<n-i;k++)//middle-left triangle
           printf("%d ",(k+1));        

        for(int m=n-1-i;m>=1;m--)//right triangle
            printf("%d ",m);

        printf("\n");
    }
    return 0;
}