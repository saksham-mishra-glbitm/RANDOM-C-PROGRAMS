#include <stdio.h>
#include <math.h>

int main()
{
    
    double kms=0.0, miles=0.0;
    printf("Enter the distance in kilometers:\n");
    scanf("%lf",&kms);
    printf("\nEnter the distance in miles:\n");
    scanf("%lf",&miles);

    double resmiles = 0.621371192*kms;
    double reskms = miles/0.621371192;

    printf("\n\n%lf in miles = %lf.",kms,resmiles);
    printf("\n%f in kilometers = %lf.",miles,reskms);
    
    return 0;

}
