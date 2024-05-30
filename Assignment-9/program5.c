#include<stdio.h>

void Range(int iNum1, int iNum2)
{
    int i = 0;
    if(iNum2 > iNum1)
    {
        printf("Invalid Range\n");
    }
    for(i = iNum2; i >= iNum1; i--)
    {
       printf("%d\t",i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the range :\n");
    scanf("%d\n%d",&iValue1,&iValue2);

    Range(iValue1,iValue2);
    return 0;
}

