#include<stdio.h>

int MultFact(int iNo)
{
    int iMul = 1;
    int i =0;
    for(i =  1; i <= iNo/2 ; i++)
    {
        if(iNo%i == 0)
        {
            iMul = iMul * i;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);
    return 0;
}