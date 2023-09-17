#include<stdio.h>
int main()
{
    int i;
    for( i=1;i<=8;i++)
    {
        printf("%d\n",i);
        if(i==6)
        break;
    }
    printf("\n%d",i);
    return 0;
}