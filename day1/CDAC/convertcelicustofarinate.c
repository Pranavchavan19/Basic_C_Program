#include<stdio.h>
int main()
{
    char ch;
    int n1,n2,add,sub,mul,div;
    printf("Enter the character");
    scanf("%c",&ch);
    printf("enter value of n1,n2");
    scanf("%d%d",&n1,&n2);
    switch(ch)
    {
        case 'a': add=n1+n2;
        printf("%d",add);
        break;
        case 'b': sub=n1-n2;
        printf("%d",sub);
        break;
        case 'c': div=n1/n2;
        printf("%d",div);
        break;
        

    }

    

}