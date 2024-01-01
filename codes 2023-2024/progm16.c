//divisible by 7 or not//
#include<stdio.h>
int main()
{
    int x;

    printf("enter an integer\n");
    scanf("%d",&x);
    if(x>0)
    {
    x%7>0? printf("%d is not divisible by 7",x): printf("%d is divisible by 7",x);
    }
    else if(x<O)
    {
        printf("please enter a positive value");
    }
}