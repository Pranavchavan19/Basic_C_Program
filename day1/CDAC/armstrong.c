#include<stdio.h>
int main()
{
   int r,sum=0,c,num,n;
   
   printf("Enter the number");
   scanf("%d",&num);
   int temp=num;
    while(n!=0)
  {
    r=num%10;
    //c=r*r*r;
    sum=sum+(r*r*r);
    num=num/10;
  }
  if(temp==sum)
  {
    printf("Given no is armstrong no");
  }
  else{
    printf("givrn no is not armstrong no");
  }
}