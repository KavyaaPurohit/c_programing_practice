//mult table using for//
#include<stdio.h>
int main()
{
    int x,i;
    printf("eneter a no");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d",x,i,x*i);
    }
}