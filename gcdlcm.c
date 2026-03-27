#include <stdio.h>
#include <math.h>

int gcdd(int a,int b)
{
    return (b==0)?a:gcdd(b,a%b);
}
int main()
{
    int a=0,b=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    int gcd = gcdd(a,b);
    int lcm = a/(gcd) * b;

    printf("\nGCD of %d and %d = %d.\nLCM of %d and %d = %d.",a,b,gcd,a,b,lcm);
}