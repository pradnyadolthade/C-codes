#include<stdio.h>

int RangeSum(int iNum1, int iNum2)
{
    int i = 0, iSum = 0;
    if(iNum2 > iNum1)
    {
        printf("Invalid Range\n");
    }
    for(i = iNum1; i <= iNum2; i++)
    {
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the range :\n");
    scanf("%d\n%d",&iValue1,&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("Addition is %d\n",iRet);
    return 0;
}

