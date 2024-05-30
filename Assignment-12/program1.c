#include<stdio.h>

void Pattern(int iNum)
{
    int i = 0;
    char ch = 'A';
    for(i = 0; i < iNum; i++)
    {
        printf("%c\t",ch);
        ch ++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}