#include<stdio.h>

int FactRev(int iNo)
{
    
    int i =0;
    for(i =  iNo/2; i >=1 ; i--)
    {
        if(iNo%i == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}