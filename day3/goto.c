#include<stdio.h>
int main()
{
    int a=3,b=3,c,u,e,f,jump;
    goto  jump;
    c=a+b;
    printf("%d",c);
    u=a-b;
    printf("%d",u);
    jump:
    e=a/b;
    
    printf("%d",e);
}