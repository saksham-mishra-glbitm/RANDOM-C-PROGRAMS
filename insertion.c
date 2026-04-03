#include <stdio.h>

void sort(int arr[], int n) 
{
    for(int i=1;i<n;i++) 
    {
        int currentval=arr[i];
        int previousvalue=i-1;
        while (previousvalue>=0 && arr[previousvalue] > currentval)//arr[previousvalue]<currentval,for descending
        {
            arr[previousvalue+1]=arr[previousvalue];
            previousvalue--;
        }
        arr[previousvalue+1]=currentval;
    }
}	

void print(int arr[], int n) 
{
    printf("\n");
    for(int i=0; i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
}

int main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d integers in the array: ",n);
    int arr[n];
    for(int i=0; i<n; i++) 
        scanf("%d",&arr[i]);

    printf("\nInput Array: ");
    print(arr,n);
    sort(arr, n);
    printf("\nSorted Array: ");
    print(arr,n);
}


// time complexity = O(n^2)
