
//sq of two nos using functions
#include<stdio.h>
int square(int n);
int main()
{
    int x,a;
    printf("enter an integer\n");
    scanf("%d",&x);
    a=square(x);
    printf("the square of %d is %d",x,a);
}
int square(int n){
    return(n*n);
}


