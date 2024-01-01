#include<stdio.h>
int main()
{
    char x;
    printf("enter a character");
    x=getchar();
    if(x=='a'||x=='e'||x=="i"||x=="o"||x=="u")
    {
        printf("the character is a vowel");
    }
    else if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("the character is a vowel");
    }
    else
    {
        printf("the character is a consonant");
    }
    return 0;
}