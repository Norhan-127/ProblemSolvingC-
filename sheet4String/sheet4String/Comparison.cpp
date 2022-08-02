#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    string s,a,b;
    cin>>s;
    string smallOne=s;
    for (int i=0; i<s.size()-1; i++) {
        a=s.substr(0,i+1);
        b=s.substr(i+1,s.size());
//        cout<<a<<" "<<b<<endl;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
//        cout<<a<<b<<endl;
        smallOne=min(smallOne,a+b);
    }
    cout<<smallOne<<endl;
}
