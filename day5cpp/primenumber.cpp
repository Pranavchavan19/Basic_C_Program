#include<iostream>
using namespace std;
int main()
{
    int a,n,c;
    cout<<"\nEnter thr number";
    cin>>a;
    for(int i=1;i<=n;i++)
    {
      
    
     if(n%i==0)
        {
        c++;
        }
       
    }
    if(c==2)
    {
        cout<<"prime";
     
    }
    else{
         cout<<"no";
    }

}