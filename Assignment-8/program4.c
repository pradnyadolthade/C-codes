#include<stdio.h>


double FhtoCs(float fTemp)
{
    double cTemp = 0;

    cTemp = ((fTemp-32)*(0.56));

    return cTemp;
}




int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Calcius :%.2f",dRet);
}