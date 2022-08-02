#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int len=s.length();
    if (len<=10) {
        cout<<s<<"\n";
    }else{
        cout<<s[0]<<len-2<<s[len-1]<<"\n";
    }
  }
}
    


