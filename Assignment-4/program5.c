#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum = 0,iSum1=0; 
    int i =0;
    for(i =  1; i < iNo ; i++)
    {
        if(iNo%i != 0)
        {
            iSum= iSum + i;
        }
         if(iNo%i == 0)
        {
            iSum1= iSum1 + i;
        }
    }
return (iSum1-iSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}