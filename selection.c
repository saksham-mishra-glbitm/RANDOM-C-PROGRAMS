#include <stdio.h>

void sort(int arr[], int n) 
{
    for (int i=0; i<n-1; i++) 
		{
			int sm=i;
			for(int j=i+1; j<n; j++) 
			{
				if (arr[j]<arr[sm])   //arr[j]>arr[sm] for descending
					sm=j;
			}
			int t = arr[i];
			arr[i] = arr[sm];
			arr[sm] = t;
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