#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    int i =0;
    for(i =  1; i <= iNo ; i++)
    {
        if(iNo%i != 0)
        {
            iSum= iSum + i;
        }
    }
return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}