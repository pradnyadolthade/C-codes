#include<stdio.h>

int NonFact(int iNo)
{
    
    int i = 0;
    for(i = 2; i <= iNo ; i++)
    {
        if(iNo%i!= 0)
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

    NonFact(iValue);
    return 0;
}