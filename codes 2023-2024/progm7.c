#include<stdio.h>
int main()
{
    int x;
    printf("enter your age");
    scanf("%d",&x);
    if(x>=18)
    {
        printf("you can vote");
    }
    else if(x>10 && x<18)
    {
        printf("you can vote for kids");
    }
    else{
        printf("you cannot vote");
    }
    return 0;
    
    
    }