#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a=0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;
    if(b*log(a) > d*log(c)){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
