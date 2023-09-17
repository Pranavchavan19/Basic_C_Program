#include<stdio.h>
int main()
{
    int n;
int sum=1;
    printf("entr number");
    scanf("%d",&n);
    printf("Factors=");
    for(int i=1;i<=n;i++)
    {
       /* if(n%i==0)
        {
            //printf("  %d , ",i);

           // sum=n*i;
            sum=sum+i;
           
          
        }*/
        sum=sum*i;
    }
    printf("%d",sum);
}