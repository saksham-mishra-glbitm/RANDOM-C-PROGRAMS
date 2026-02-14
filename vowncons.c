#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main()
{
    char ch='\0';
    char vowels[6]="AEIOU";
    vowels[5]='\0';
    printf("Enter a character:\n");
    scanf(" %c", &ch);

    char chh =  (char)toupper(ch);
    char shh[2] = "";
    sprintf(shh, "%c", chh); 

    if(strstr(vowels,shh)!=NULL)
        printf("%c is a vowel.",ch);
    else
        printf("%c is a consonant.",ch);

}