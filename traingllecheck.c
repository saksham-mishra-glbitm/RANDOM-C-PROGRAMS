#include <stdio.h>

int main()
{
    int a=0,b=0,c=0;
    printf("Enter 3 sides of a triangle:\n");
    scanf("%d %d %d",&a,&b,&c);
    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    int min = (a<b)?((a<c)?a:c):((b<c)?b:c);
    int third = (a+b+c)-(max+min);
    if(max>=(min+third))
    {
        printf("\nIt is an INVALID TRIANGLE!!!");
        return -99;
    }

    if(a==b && b==c)
        printf("It is an EQUILATERAL triangle.");
    else if((a==b)||(b==c)||(a==c))
        printf("It is an ISOSCELES triangle.");
    else
        printf("It is a SCALENE triangle.");
    
    return 0;
}