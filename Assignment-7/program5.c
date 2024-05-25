#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0, odd = 1, even=1,fact=1;
    for(i=2; i<=iNo;i++)
    {
        if(i % 2 != 0)
        {
        odd = odd * i;
        }
        if(i % 2 == 0)
        {
        even = even * i;
        }
        
    }
    fact = even -odd;
 return fact;
}



int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("%d",iRet);

    return 0;
}