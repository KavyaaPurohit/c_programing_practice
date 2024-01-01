//divisoble by 6//
#include<stdio.h>
int main()
{
    int x;
    printf("enter an interger\n");
    scanf("%d",&x);
    if(x%2==0 && x%3==0)
    {
        printf("%d is divisible by 6",x);
    }
    else if(x%2==0 || x%3==0)
    {
        printf("%d is not divisible by 6",x);
    
    }
    else{
        printf("%d is not divisible by 6",x);
    }
}