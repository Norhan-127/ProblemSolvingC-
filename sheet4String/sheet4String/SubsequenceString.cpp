#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
  
    string s;
    cin>>s;
    string hello="hello";
    int i=0,z=0;
    while (true) {
        if (i==s.size() || z==hello.size()) {
            break;
        }
        if (s[i]==hello[z]) {    //i=9 ---->o
                                 //z=4 ---->l
            z++;
        }
        i++;
    }if(z==5){
        cout<<"YES\n";
    }else cout<<"NO\n";
    
}
//ahhellllloou
//hello
