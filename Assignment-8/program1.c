#include<stdio.h>

const float PI = 3.14;

double CircleArea(float fRadius)
{
    double iArea = 0.0;

    iArea = PI * fRadius * fRadius;
    
    return iArea;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is %.2f",dRet);

    return 0;
}