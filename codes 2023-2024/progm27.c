//factorial of a no//
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("enter an integer");
    scanf("%d",&x);
    if(x==0)
    {
        printf("%d factorial is 1",x);
    }
    else if(x<0)
    {
        printf("factorial of -ve not possible, please give a +ve input");
    }
    else{
    while(x>0)
    {
        
        i=i*x;
        x--;
    }  
    printf("the factorial is %d",i);                                                                                                                          
}
}
