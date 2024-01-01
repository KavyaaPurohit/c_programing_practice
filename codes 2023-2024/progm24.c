//vowel or consonant using if else//
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet\n");
    ch=getchar();
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("the alphabet is vowel");
     }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("the alphabet is a vowel");
    }
else
{
    printf("the alphabet is a consonant");
}
return 0;
}
