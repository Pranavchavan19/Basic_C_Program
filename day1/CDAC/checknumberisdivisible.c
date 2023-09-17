#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%8==0 && n%5==0)
    {
      printf("NO is divisible by 8 &5");
    }
    else if(n%8==0)
    {
        printf("no is divisible by 8 only");
    }
    else if(n%5==0)
   {
    printf("no is divisible by 5 only");
   }
   else {
    printf("no is nor divisible by 8 & 5");
   } 
}