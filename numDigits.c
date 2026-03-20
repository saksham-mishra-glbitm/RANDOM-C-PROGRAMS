#include <stdio.h>
#include <math.h>

int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int count = (int)log10(n) + 1;
    
    printf("\nInput number = %d.\nNumber of digits = %d.",n,count);
    
    
    return 0;
}
