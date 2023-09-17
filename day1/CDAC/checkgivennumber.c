#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int count=0,d;
   for(int i=1;i<=n;i++)
   {
    //int count=0;
    if(n%i==0)
    {
        count++;
    }
     
   }
   
   if(count==2)
   {
     printf("given is prime");
   }
   else{
    printf("given no  is not prime");
   }
   
}