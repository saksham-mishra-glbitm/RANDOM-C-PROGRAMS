#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);

    strcpy(str1,str2);    

    printf("\nString 1 = %s.\nString 2 = %s.",str1,str2);
    
    return 0;
}