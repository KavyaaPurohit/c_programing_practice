//funtions print namaste if indian and bonjour if user is french
#include<stdio.h>
#include<string.h>
void namaste();
void bonjour();
int main()
{
    char i,f,n;
    printf ("the natinality of person is:\n");
    scanf("%c",&n);
   if(n=='i'){
        namaste();
    }
    else if(n=='f'){
       bonjour();
    }
    return 0;
}
void namaste()
{
    printf("namaste!\n");
    bonjour();
}
void bonjour()
{
    printf("bonjour!\n");
}