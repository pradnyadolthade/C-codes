#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;
    for(i = 1;i<=iNo*5;i++)
    {
        if(i%iNo==0)
        {
        printf("%d\t",i);
        }
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
}