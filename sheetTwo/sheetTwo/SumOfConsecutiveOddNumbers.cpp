#include<iostream>
#include <cmath>
using namespace std;
int main(){
 
    int test;
    cin>>test;
    while (test--) {
        int a,b;
        cin>>a>>b;
        int mx=INT_MIN,mini=INT_MAX;
        mx=max(a,b);
        mini=min(a,b);
        long long  sum=0;
        for (int i=mini+1; i<mx; i++) {
            if (i%2!=0) {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
   
}


