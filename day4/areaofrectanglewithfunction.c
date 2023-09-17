#include<stdio.h>
int rec(int a ,int b)
{
    int area=a*b;
    return area;

}
int main()
{
   int res;
   int a=2;int b=3;
   //calling function
   res=rec(a,b);
   printf("%d",res);
   

}