#include<iostream>
using namespace std;
int main(){

    int mx=0;
    int n,number;
    cin>>n;
    for (int i=0; i<n; i++) {
            cin>>number;
        if (number>mx) {
            mx=number;
        }
        }
    cout<<mx<<endl;
    
    return 0;
}
