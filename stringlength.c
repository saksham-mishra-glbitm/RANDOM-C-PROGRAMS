#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);

    int len=0,i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }

    printf("\nLength of entered string = %d.",len);
    
    return 0;
}