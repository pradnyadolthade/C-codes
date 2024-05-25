#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {   printf("small");
    }
    else if(50 <= iNo && iNo <100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }

}

int main()
{
    int iValue = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}