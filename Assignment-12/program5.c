#include<stdio.h>

void Pattern(int iNum)
{
    int i = 0;
    
    for(i = 2; i <= iNum*2; i+=2)
    {
        printf("%d\t",i);

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