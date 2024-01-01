//roots of an eq//
#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a, b , c\n ");
    scanf("%d%d%d",&a,&b,&c);
    int D;
    D= pow(b,2)-4*a*c;
    if(D>0)
    {
    float x,y;
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
    printf("the eq has two unique real roots %f and %f",x,y);
    }
    else if(D==0)
    {
        float z;
        z=(-b/(2*a));
        printf("the eq has equal real roots %f",z);
    }
    else
    {
        printf("the eq has imaginary roots");
    }
}