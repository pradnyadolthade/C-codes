#include<stdio.h>
#include<stdbool.h>

bool checkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
            break;
        }
        iNo = iNo / 10;
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = checkZero(iValue);
    if(bRet == true)
    {
        printf("It contain zero\n");
    }
    else
    {
        printf("It doesn't contain zero\n");
    }
    return 0;

}