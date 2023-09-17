#include<stdio.h>
int main()
{
    int n=121,s,r;
    //printf("Enter the number");
    //scanf("%d",&n);
 int rev=0;

    while(n>0)
    {
        r=n%10;
       // s=s*10+r;
        printf("%d" ,r);
        n=n/10;
      // printf("%d" ,r);
      rev=rev+r;

    }
    printf("%d",r);
    if(rev==n)
    {
        printf("palindrome");
    }
    else{
        printf("no");

    }

   
    
}