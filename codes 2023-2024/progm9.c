#include<stdio.h>
int main()
{
    char x[50];
    printf("enter the subjects you have passed in :");
    gets(x);
    if(x=='science')
    {
        printf("you will get a prize of rs 15");
    }
    else if(x=='maths')
{
    printf("you get a prize of 15 rs");
}       
 else if(x=='science'&& x=='maths')
    {
        printf("you will get a prize of rs 45");

    }
    else
    {
        printf("invalid input");
    }
    
}