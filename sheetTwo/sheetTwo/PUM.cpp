#include<iostream>
using namespace std;
int main(){
 
    int n,count=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        count++;
        for (int j=1; j<4; j++) {
            cout<<count++<<" ";
        }
        cout<<"PUM"<<endl;
    }
    
}

