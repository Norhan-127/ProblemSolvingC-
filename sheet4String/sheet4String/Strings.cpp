#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string a,b;
    cin>>a>>b;
    int len1=a.length();
    int len2=b.length();
    cout<<len1<<" "<<len2<<"\n";
    cout<<a+b<<"\n";
    
        int temp=a[0];
        a[0]=b[0];
        b[0]=temp;
    cout<<a<<" "<<b<<"\n";
}
    

