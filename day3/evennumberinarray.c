#include<stdio.h>
int main()
{
    printf("even number=");
    int a[7]={1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d,",a[i]);
        }
      
    }

}