#include<stdio.h>
float si(int amount ,int interest)
{
    float multiplication= amount *interest;
    float per=multiplication/100;
    return per;
}
int main()
{
 int amount1=1000;
 int interest2=12;
 //calling the function with arguement
 float result=si(amount1, interest2);
 printf("%f",result);
 return 0;


}