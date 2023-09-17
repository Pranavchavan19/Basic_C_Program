#include<stdio.h>
int main()
{
   /* int n,a=0,b=1,c;
    for(int i=1;i<=6;i++)
    {
        printf("%d  ",a);
    //printf("%d",b);
        c=a+b;
        a=b;
        b=c;*/
       
        
       /*int n,a=0,b=1,c;
        printf("Enter the number");
        scanf("%d",&n);
        printf("fibonacii series=");
        for(int i=1;i<=n;i++)
        {
          printf("%d ",a);
          c=a+b;
          a=b;
          b=c;
        }*/  
        int n,a=0,b=1,c,temp=0;
        printf("Enter the number");
        scanf("%d",&n);
        printf("fibonacii series=");
        do{
          
            printf("%d ",a);
           
          c=a+b;
          a=b;
          b=c;
          temp=temp+a;
       
          break;


        }
         
        while(n>=0);
        {
           printf("%d ",temp);
          
        }

       



        
    

}