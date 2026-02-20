#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch='\0';
    printf("Enter a character:\n");
    scanf(" %c",&ch);

    if(isdigit(ch))
        printf("%c is a digit.",ch);
    else if(isalpha(ch))
        printf("%c is a character.",ch);
    else
        printf("%c is a special character.",ch);
}