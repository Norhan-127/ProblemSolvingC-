#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin>>s;
    int freq[123]={0};
    for (int i=0; i<s.length(); i++) {
        freq[s[i]]++;
    }for(int i=0;i<123;i++){
        if (freq[i]!=0) {
            cout<<(char)i<<" : "<<freq[i]<<endl;
        }
    }
}
    



