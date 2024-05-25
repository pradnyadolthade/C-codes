#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    for(i=1;i<=iNo;i++)
    {
        printf("%s\t","*");
    }  
        for(i=1;i<=iNo;i++)
    {
        printf("%s\t","#");
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}