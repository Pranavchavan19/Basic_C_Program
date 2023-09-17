#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=7;i++)
    {
        printf("%d",i);
        if(i==4)
        continue;
    }
    printf("\n%d",i);
}