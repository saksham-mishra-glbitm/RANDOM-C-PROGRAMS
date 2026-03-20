#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int t=n,revnum=0;
    
    while(t!=0)
    {
        revnum = revnum*10+t%10;
        t/=10;
    }
    
    if(n==revnum)
    printf("\nThe number %d is Palindrome.",n);
    else
    printf("\nThe number %d is NOT Palindrome.",n);

    return 0;
}
