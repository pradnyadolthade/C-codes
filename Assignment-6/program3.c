#include<stdio.h>

int Factorial(int iNo)
{
    int Fact = 1;
    int i = 0;
    for(i = iNo; i >1; i--)
    {
        Fact = Fact * i;
    }        

    return Fact;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}