//calculator using switch//
#include<stdio.h>
int main()
{
    char ch;
    int x,y;
    float r;
    printf("enter the operator");
    ch=getchar();
    printf("enter the operands");
    scanf("%d%d",&x,&y);
    switch(ch)
    {
        case ('+'):
        r=x+y;
        printf("%d+%d=%f",x,y,r);
        break;
        case ('-'):
        r=x-y;
        printf("%d-%d=%f",x,y,r);
        break;
        case('*'):
        r=x*y;
        printf("%d*%d=%f",x,y,r);
        break;
        case('/'):
        r=(float)x/y;
        printf("%d/%d=%f",x,y,r);
        break;
        case('%'):
        r=x%y;
        printf("%d%%%d=%f",x,y,r);
        break;
    }
}