#include<stdio.h>
#include<stdbool.h>

int MultiDigit(int iNo)
{
    int iDigit = 0, iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultiDigit(iValue);
    printf("%d",iRet);
    return 0;

}