#include<stdio.h>
#include<stdbool.h>

int countEven(int iNo)
{
    int iDigit = 0, count = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            count++;
        }
        iNo = iNo / 10;
    }
    return count;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = countEven(iValue);
    printf("%d",iRet);
    return 0;

}