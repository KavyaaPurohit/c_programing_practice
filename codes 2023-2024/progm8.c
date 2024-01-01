#include<stdio.h>
int main()
{
    int x;
    printf("enter the no. of subjects you have passesd in :");
    scanf("%d",&x);
    if(x==1)
       {
        printf("you will get a prze of rs 15");
        }
            else if(x==2)
            {
            printf("you will get a prize of rs 45");
        } 
        else
        {
            printf("invalid input");
        }  
}