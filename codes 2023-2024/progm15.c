//even or odd using conditional statements//
#include<stdio.h>
int main()
{
    int x;
    printf("enter an integer:\n");
    scanf("%d",&x);
    x%2!=1? printf("%d is even",x): printf("%d is odd",x);
}