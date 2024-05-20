#include<ctype.h>

#include<stdio.h>


void DisplayConvert(char Cvalue)
{
    if(Cvalue == tolower(Cvalue))
    {
        printf("%c",toupper(Cvalue));
    }
    else if(Cvalue == toupper(Cvalue))
    {
        printf("%c",tolower(Cvalue));

    }    
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}