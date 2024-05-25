#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for(i = 1;i<=iNo;i++)
    {
        printf("%d\t",i);
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);
}