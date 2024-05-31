#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0, no=1;
    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<=iCol;j++)
        {
          if(i == 1 || i ==iRow || j == 1 || j == iCol || i == j)
          {
            printf("%s\t","*");
          }
          else
          {
            printf("%s\t"," ");
          }           
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