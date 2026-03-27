#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);

    for(int i=0,k=strlen(str)-1;i<(strlen(str)/2);i++,k--)
    {
        char tem = str[i];
        str[i]=str[k];
        str[k]=tem;
    }

    printf("\nRevered string = %s.",str);
    
    return 0;
}