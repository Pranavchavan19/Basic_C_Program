#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"\nEnter the number 4 digits";
        cin >>n;
    
  while(n>0)
  { 
    r=n%10;
    sum=sum+r;
    n=n/10;

  }
  cout<<"\nsum="<<sum;

}