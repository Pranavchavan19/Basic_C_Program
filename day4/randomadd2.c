#include<stdio.h>
int main()
{
    printf(" Enter the Elements ");
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("additoon\n");
    int add=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         //add=a[0][1]+a[2][0]+a[0][2]+a[2][2];
        // add=add+a[i][j];
        if((i+j==0 )|| (i+j==2) && (i!=1)|| (i+j==4))
        {
            add=add+a[i][j];
        }
        }
        
    }
    printf("%d\t",add);
}