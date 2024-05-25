#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 0;i<iNo;i++)
    {
        printf("%s\t%s\t","$","*");
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);
}