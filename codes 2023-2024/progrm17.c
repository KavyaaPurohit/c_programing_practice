//divisible by 7 or not using if //
#include<stdio.h>
int main()
{
    int x;
    printf("enter an integer:\n");
    scanf("%d",&x);
    if(x%7==0)
    {
        printf("%d is divisible by 7",x);
    }
    if(x%7!=7)
    {
        printf("%d is not divisible by 7",x);
    }
}