#include <stdio.h>
#include <math.h>

int main()
{
    int day=0;
    printf("Enter the number of days:\n");
    scanf("%d",&day);

    printf("\nYears = %d", (day/365));
    double daysinMonth = 365/12.0;
    printf("\nMonths = %d", (int)(day/daysinMonth));

    int totalMonths=(int)(day/daysinMonth);
    int remainingDays=day;

    while(totalMonths>12)
    {
        remainingDays=remainingDays-365;
        totalMonths-=12;
    }

    for(int i=1;i<=12;i++)
    {
        if(remainingDays<31)
            break;

        else if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
            remainingDays=remainingDays-31;

        else if(i==2)
            remainingDays=remainingDays-28;

        else
            remainingDays=remainingDays-30;
    }

    printf("\nDays = %d", remainingDays);    
}