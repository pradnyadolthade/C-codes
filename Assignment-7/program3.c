#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0, fact = 1;
    for(i=2; i<=iNo;i++)
    {
        if(i % 2 == 0)
        {
        fact = fact * i;
        }
        
    }
 return fact;
}



int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("%d",iRet);

    return 0;
}