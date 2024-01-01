#include<stdio.h>
int main()
{
   int x;
    printf("enter you age");
    scanf("%d",&x);
    switch(x)
    {
        case 3:
        printf("the age is 3");
        break;
        case 10:
        printf("the age is 10");
        break;
        case 24:
        printf("the age is 24");
        break;
        default:
        printf("the age is not 3, 10 or 23");
        break;

    }
    return 0;
}