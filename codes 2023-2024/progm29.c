//sum od odd no fac to 2n-1//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int f=1,i=1 ,sum=0;
    while(i<=2*n-1)

    {
        
    
        f=f*i;
        if(i%2!=0)
        sum=sum+f;
        i++;
    
    }
    printf("\nvalue of series is %d",sum);
}