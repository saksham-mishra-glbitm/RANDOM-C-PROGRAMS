#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//NORMAL CALCULATOR

int main()
{
    char choice='\0';
    printf("Enter your choice (+ - * /): ");
    scanf("%c", &choice);

    if(choice!='+'&&choice!='-'&&choice!='*'&&choice!='/')
    {
        printf("INVALID INPUT!!!");
        return 0;
    }

    double n1=0.0,n2=0.0;
    printf("Enter two integers: ");
    scanf("%lf%lf",&n1,&n2);

    if(choice=='/' && n2==0)
    {
        printf("\n***INVALID VALUE***\nCannot divide by 0.");
        return -99;
    }
    
    switch(choice)
    {
        case '+': 
        printf("Sum of %lf and %lf = %lf\n",n1,n2,(n1+n2));
        break;

        case '-': 
        printf("Difference of %lf and %lf = %lf\n",n1,n2,(n1-n2));
        break;

        case '*': 
        printf("Multiplication of %lf and %lf = %lf\n",n1,n2,(n1*n2));
        break;

        case '/': 
        printf("Division of %lf by %lf = %lf\n",n1,n2,(n1/n2));
        break;

        default: 
        printf("INVALID CHOICE!!!");
        break;
    }
    
    return 0;
}