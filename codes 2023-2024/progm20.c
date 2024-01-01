//greatest of three nos in nested//
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter an integer");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        printf("%d is greatest",x);
        else
        printf("%d is greatest",z);
    }
    else
    {
        if(y>z)
        printf("%d is the greatest",y);
        else
        printf("%d is the greatest",z);
    }

}