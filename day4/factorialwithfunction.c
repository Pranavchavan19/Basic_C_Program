//with return type without parameter

#include<stdio.h>
int add(int n)
{
    for(int i=0;i<5;i++)
    {
        n=n*i;
        
    }
    printf("factorial is %d",n);
    return 0;

}
int main()
{
    int n;
    printf("enter any no");
    scanf("%d",&n);
    add(n);
    return 0;
}