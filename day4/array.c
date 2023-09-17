#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    printf("enter the number");
     for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
               
            }
             
        }
        printf("\n matrix");
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
               // printf("\t %d",a[i][j]);
                 printf("\t [%d][%d]%d",i,j,a[i][j]);
               
            }
             printf("\n");
        }
    
}