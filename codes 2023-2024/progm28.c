//fac series sum//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int f=1,i=1    ,sum=0;
    while(i<=n)
    {
        f=f*i;
        sum=sum+f;
        i++;
    }
    printf("\nvalue of series is %d",sum);
}
