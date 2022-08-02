#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    for (int i=0; i<s.length()/2; i++) {
        if (s[i]!= s[s.length() - i - 1]) {
            cout<<"NO\n";
            return 0;
        }
    }cout<<"YES\n";
}
    



