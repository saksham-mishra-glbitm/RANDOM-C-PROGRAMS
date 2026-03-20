#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int large=a[0];
    for(int i=0;i<n;i++)
    {
        if(large<a[i])
            large=a[i];
    }

    printf("\nLargest of all elements = %d.",large);
    
    return 0;
}
