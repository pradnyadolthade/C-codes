#include<stdio.h>


double SquareMeter(int iValue)
{
    double sTemp = 0;

    sTemp = iValue * 0.0929;

    return sTemp;
}




int main()
{
    int fValue = 0;
    double dRet = 0.0;

    printf("Enter area in squre feet\n");
    scanf("%d",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in square meter is :%f",dRet);
}