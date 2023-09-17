#include<stdio.h>
int main()
{
    int a[3][3],add=0;
    printf("Enter  number in array\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("matrix number\n");
    
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Addition of two arry\n");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i+j==1) || (i+j==3))
            {
               // printf("%d\n",a[i][j]); to add the elements which is added
              add=add+a[i][j];
             
            }
           
        }
       // printf("\n");
      

    }
   printf("%d\t",add);    
   
}