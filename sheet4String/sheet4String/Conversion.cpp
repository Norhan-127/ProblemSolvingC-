#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    string s;
    cin>>s;
    
    for (int i=0; i<s.size(); i++) {
        if (s[i]==',') {
            s[i]=' ';
            cout<<"";
        }
        else if (s[i]>= 65 && s[i] <= 90) {
            int x=s[i]+32;
            s[i]=(char)x;
        }else{
            int x=s[i]-32;
            s[i]=(char)x;
        }
        
        cout<<s[i];
    }
    cout<<endl;
}

