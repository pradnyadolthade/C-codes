#include<stdio.h>


double RectArea(float fwidth, float fheight )
{
    double iArea = 0.0;

    iArea = fheight * fwidth;
    
    return iArea;

}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;

    double dRet = 0.0;

    printf("Enter height\n");
    scanf("%f",&fValue1);
    
    printf("Enter width\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area is %.2f",dRet);

    return 0;
}