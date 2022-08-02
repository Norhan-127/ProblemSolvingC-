#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    int sum=0;
    for (int i=0; i<s.length(); i++) {
        sum+=s[i]-'0';
    }cout<<sum<<"\n";
}
    

