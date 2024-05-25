#include<stdio.h>


int DollarToINR(int iNo)
{
    int dlr = 0;
    dlr = iNo*83.25;
    return dlr;   
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD\n");

    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;

}