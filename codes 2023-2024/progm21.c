//greatest of 3 int ladder form//
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter an integer\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && y>z)
    {
        printf("%d is the greatest int",x);
    }
    else if(y>x && y>z)
    {
        printf("%d the greatest int",y);
    
    }
else
{
    printf("%d is the greatest int",z);
    }
}