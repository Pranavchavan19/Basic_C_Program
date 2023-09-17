#include<stdio.h>
int main()
{
    int num1=4;
    float e=5.5;
    char ch='v';
    double  p=787;
    printf("  %d",sizeof(num1));
    printf("   %d",sizeof(e));
    printf("  %d",sizeof(ch));
    printf("  %ld",sizeof(p));
}