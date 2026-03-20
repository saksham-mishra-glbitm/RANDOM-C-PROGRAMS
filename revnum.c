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
    
    printf("\nInput number = %d.\nReversed number = %d.",n,revnum);
    
    
    return 0;
}
