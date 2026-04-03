#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main()
{
    char ch[100];
    char vowels[]="AEIOUaeiou";
    printf("Enter a string:\n");
    scanf(" %99s", ch);
    int v=0;

    for(int i=0;i<ch[i]!=0;i++)
    {
        if(strchr(vowels,ch[i])!=NULL)
            v++;
    }

    printf("\nNumber of vowels = %d.",v);

}