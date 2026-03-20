#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(isPrime(n))
    {
        printf("\nThe factors of the %d are = %d and %d.",n,1,n);
        return -99;
    }
    
    printf("\nThe factors of the %d are =",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf(" %d",i);
    }
    
    return 0;
}

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
