#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum += (1/(double)i);
    }

    printf("\nSum of series = %lf.",sum);

}