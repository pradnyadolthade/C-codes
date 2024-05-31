#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch = 'A';

    for(i = 1; i <=iRow; i++, ch++)
    {
        for(j = 1; j<=iCol;j++)
        {
            printf("%c\t",ch);
            
        }
        printf("\n");
    }
}

int main()
{
    int iVal1 = 0, ival2 = 0;

    printf("Enter no of row and col");
    scanf("%d%d",&iVal1,&ival2);

    Pattern(iVal1,ival2);

    return 0;
}