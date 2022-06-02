#include<iostream>
#include <cmath>
using namespace std;
int main(){
 
    int a,b;
    cin>>a>>b;
    int mx=max(a,b);
    int mxTest=INT_MIN;
    for (int i=1; i<=mx; i++) {
        if (a%i==0 && b%i==0) {
            if(i>mxTest){
                mxTest=i;
            }
        }}
    cout<<mxTest<<endl;
}

