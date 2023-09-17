#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("enter any number");
    scanf("%d",&n);
    for(int i=1;i<=6;i++)
    {
      sum=sum+i;
    }
    printf("%d",sum);
}