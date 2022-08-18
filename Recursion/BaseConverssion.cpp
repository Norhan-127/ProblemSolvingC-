#include <iostream>
using namespace std;
void toBinary(int num){
    if (num==0) {
        return;
    }
    toBinary(num/2);
    cout<<num%2;
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,test;
    cin>>test;
    while (test--) {
        cin>>n;
        toBinary(n);
        cout<<endl;
    }
    return 0;
}

//string toBin(ll n){
//    string ans = "";
//    while(n){
//        ans += to_string(n%2);
//        n /=2;
//    }
//    return ans;
//}
