#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    getline(cin,s);
    int len=s.length();
    for (int i=0; i<len; i++) {
        if (s[i]=='\\') {
            break;
        }else cout<<s[i];
    }cout<<endl;
}
    

