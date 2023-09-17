#include <iostream>
using namespace std;
int main()

{
    int n,digit,n1,digit2,n2,digit3,n3,digit4;

    cout << "enter four digit: ";
    
    cin >> n;
        digit = n % 10;
        n1=n/10;

        digit2 = n1 % 10;
        n2=n1/10;
        
        digit3 = n2 % 10;
        n3= n2 / 10;



    cout << ":first and last value addition " <<digit+ n3 ;
}