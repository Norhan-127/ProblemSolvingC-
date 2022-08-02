#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while (t--) {
        string s,t;
        cin>>s>>t;                           //ey gpt
        int size=s.size()+t.size();          //5
        int flag1=1,flag2=1;
        for (int i=0; i<size; i++) {
            if (i!=s.size() && flag1) {     //i!=2
                cout<<s[i];
            }else{
                flag1=0;
            }
            if (i!=t.size() && flag2) {
                cout<<t[i];
            }else{
                flag2=0;
            }
        }cout<<endl;
    }
}

