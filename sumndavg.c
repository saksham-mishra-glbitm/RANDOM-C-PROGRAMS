#include <stdio.h>

int main()
{
    int n=0;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int sum=0;
    int a[n];
    printf("Enter elements in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    printf("\nSum of elements of array = %d.\nAverage of all elements of array = %lf.",sum,(double)(sum/(double)n));
}