#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    
    string str;
    bool flag=false;
    while (cin>>str) {
        reverse(str.begin(), str.end());
        if (flag) {
            cout<<" ";
        }
        flag=true;
        cout<<str;
    }
    cout<<endl;
}
