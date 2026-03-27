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

    int key,pos=-1;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            pos=i+1;
            break;
        }
    }

    if(pos>=0)
        printf("\nSEARCH SUCCESSFULL!!\nElement found at position = %d.",pos);
    else
        printf("\nSEARCH UNSUCCESSFULL!!\nElement NOT found.");
    
    return 0;
}
