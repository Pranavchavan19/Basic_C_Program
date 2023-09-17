#include<stdio.h>
int main()
{
    int amo,total,dis=200;
    printf("Enter the amount in RS");
    scanf("%d",&amo);
   if(amo>1500)
    {
      total=amo+dis;
      printf("%d",total);  
    }
    else{
        printf("%d",amo);
    }  
}