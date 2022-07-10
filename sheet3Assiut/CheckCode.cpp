#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if (s[a]!='-') {
        cout<<"No";
        return 0;
    }
    for (int i=0; i<s.length(); i++) {
        if(i ==a){
            continue ;
    }
        if (s[i]>'9' || s[i]<'0') {
            cout<<"No";
            return 0;
        }
    }cout<<"Yes";
}

        
   
    
    
    
    



