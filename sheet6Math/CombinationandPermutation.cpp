#include <iostream>
#include <cmath>
using namespace std;
long long fact(short n){
    return (n==0 ||n==1) ? 1 : n*fact(n-1);
}
int main() {
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    short n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(n-r)*fact(r))<<" ";
    cout<<fact(n)/fact(n-r)<<endl;
}
