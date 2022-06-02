#include<iostream>
//#include <cmath>
using namespace std;
int main(){
 
    short n;
    cin>>n;
    int k=1,sp=n-1;;
    for (int i=1; i<=n; i++) {
        for(int t=sp ;t>0;t--){
            cout<<" ";
        }
        sp--;
        for (int j=1;j<=k ; j++) {
            cout<<"*";
        }k+=2;
        cout<<endl;
    }
   
}
