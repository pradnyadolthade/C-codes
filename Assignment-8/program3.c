#include<stdio.h>

int KMtoMeter(int iNo)
{
    int idist = 0;

    idist = 1000 * iNo;

    return idist;
}


int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Distance\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Area is %d",iRet);
}