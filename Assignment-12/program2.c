#include<stdio.h>

void Pattern(int iNum)
{
    int i = 0;
    
    for(i = iNum; i >= 1; i--)
    {
        printf("%d\t%s\t",i,"#");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}