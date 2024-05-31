#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1; i <=iRow; i++)
    {
       if(i%2 == 0)
        { ch = 'a'; }
         else
         { ch = 'A'; }
        for(j = 1; j<=iCol; j++,ch++)
        {
          
            printf("%c\t",ch);          
        }
        printf("\n");
    }
}

int main()
{
    int iVal1 = 0, ival2 = 0;

    printf("Enter no of row and col\n");
    scanf("%d%d",&iVal1,&ival2);

    Pattern(iVal1,ival2);

    return 0;
}