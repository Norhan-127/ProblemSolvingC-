#include<iostream>
using namespace std;
int main(){
 
    int n,k=1;
    cin>>n;
    int space=n-1;
    for (int i=0; i<n; i++) {
        for(int s=space;s>0;s--){
            cout<<" ";
        }space--;
        for (int j=1;j<=k ; j++) {
            cout<<"*";
        }k+=2;
        cout<<endl;
    }k-=2;
    space++;
    for (int i=0; i<n; i++) {
        for (int s=0; s<space; s++) {
            cout<<" ";
        }space++;
        for(int j=k;j>0;j--){
            cout<<"*";
        }k-=2;
        cout<<endl;
    }
}


