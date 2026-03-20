#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n],s=0;

    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("\nSum of all elements = %d.",s);
    
    return 0;
}
