#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2];
    int b[2][2];
    int c[2][2];
    printf("Enter the number");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            
           printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
    printf("enter 2 []");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
     printf("Addition of 2 array\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

   


}

