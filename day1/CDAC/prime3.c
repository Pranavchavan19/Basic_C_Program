#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter any no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      count++;
    }
    if(count==2)
    {
        printf("prime");
    }
    else{
        printf("not");
    }
}