#include <iostream>
using namespace std;
int main()
{
   
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    long long mod=(a*b*c*d)%100;
    if (mod<10) {
        cout<<0<<mod<<endl;
    }
    else
        cout<<mod<<endl;
    return 0;
}
