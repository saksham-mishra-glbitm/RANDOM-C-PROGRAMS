#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of your pattern: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)//for rows
    {
        for(int j=0;j<=i;j++)//for columns 
        {
            if((i+j)%2==0)
                printf("A ");
            else
                printf("B ");
        }

        printf("\n");
    }
    return 0;
}