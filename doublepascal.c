#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of your pattern: ");
    scanf("%d",&n);
    int p=1;
    for(int i=0;i<n;i++)//for rows
    {
        for(int j=0;j<(n-i-1);j++)//spaces
            printf("  ");
        
        p=1;
        for(int k=0;k<=i;k++)//left triangle
        {
            printf("%d ",(p++));
        }

        for(int m=0;m<i;m++)//right triangle
        {
            int d=i-m;
            printf("%d ",(d--));
        }

        printf("\n");
    }
    return 0;
}