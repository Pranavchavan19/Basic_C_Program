#include<stdio.h>
int main()
{
    int math=78,eng=76,his=85,san=84,mar=88,sci=57;
    int avg=math+eng+his+san+mar+sci/6;
   
    int total=math+eng+his+san+mar+sci;
    printf("total=%d",total);
     avg=total/6;

    printf("avg=%d",avg);
}