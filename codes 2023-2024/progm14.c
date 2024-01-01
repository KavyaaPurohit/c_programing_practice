#include<stdio.h>
int main()
{
    int i, num=1;
    printf("enter a number i\n");
    scanf("%d",&i);
    while (num<11)
    {
        printf("%d*%d=%d\n",i,num,i*num); 
        num++;

    }
    
}